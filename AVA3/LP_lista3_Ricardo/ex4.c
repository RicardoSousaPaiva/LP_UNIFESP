/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lab 3--------------------------------------
4-Faça um programa que calcule a área de um trapézio ou o volume de uma pirâmide.
O usuário deverá escolher a opção e informar os valores necessários. Considere: A=(B+b)h/2 V= A(a*b)*h/3.*/

#include<stdio.h>
#include<math.h>

main(){
    char triagem; // Atribuição das variaveis. variavel "Triagem" será do tipo char para colocar na condição inicial 
    float Areatrap,Bmaior,bmenor,h, areaBase, volume, alturaPiramide;


    printf("Digite A para calcular area de um trapézio ou V para o volume de uma pirâmide:");// saída de dados
    scanf("%c", &triagem);// Entrada de dados

    if( triagem == 'A'){ // primeira condição verifica se o valor de entrada é igual a caracter 'A'. Caso seja verdadeiro, irá executar as entradas dentro do if.

        printf("Por favor, digite o valor da base maior:\n ");
        scanf("%f",&Bmaior);

        printf("Digite o valor da base menor:\n");
        scanf("%f",&bmenor);

        printf("Digite o valor da altura: \n");
        scanf("%f", &h);

        Areatrap= ((Bmaior+bmenor)*h)/2; // E calcular operação para area do trapezio. Conforme formula do enunciado

        printf("O valor da área do trapézio é %.f cm² !", Areatrap);
    }else if( triagem == 'V'){ // Se a primeira condição for falsa. Será verificado essa outra condição. Caso ela seja verdadeira. Será executado as entradas dentro do if

        
        printf("Por favor, digite a área da base:\n");
        scanf("%f", &areaBase);

        printf("Digite o valor da altura da pirâmide:\n");
        scanf("%f", &alturaPiramide);

        volume= (areaBase*areaBase) * alturaPiramide/3; // E realizada a operação para calcular o volume da piramide

        printf("O valor do volume da pirâmide é %.fcm³\n", volume);

    }else{ // Caso nenhuma das condições acima sejam verdadeiras, o programa irá exercutar essa saída de dados.
        printf("O caractere digitado não corresponde as opções oferecidas!\n");
    }
    
    return 0;
    //Finaliza programa
}


