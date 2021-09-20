/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva      
-------------------------------------Lista 4--------------------------------------
2- Programa que armazena 64 números inteiros em um vetor, solicita um número chave
K ao usuário e verifica se a chave está entre os 64 números. Em caso positivo, imprima
a posição do vetor em que a chave foi encontrada.
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){

    int vetor[63]; // Atribuição do vetor para alocação dos numeros
    int count1,count2,k,i; // variaveis que servirão como vetores
    count1=0;
    
    for(i=0; i < 64; i++){ // Loop que irá armazenar os valores no vetor

        vetor[i]= rand()%100; // os valores serão vem da função rand que retorna valores aleatorios. Coloquei como limite para retorno de valores no intervalo até 100 
         printf(" %d ", vetor[i]); // Imprime a matriz para testar qque o número se encontra mesmo dentro do vetor
    }
    printf("\nDigite o número chave:"); // Solicita numero de chave para o usuario
    scanf("%d", &k); //entrada de dado
    for(i=0; i < 64; i++){ // loop usado para caminhar no loop e verificar o local da chave

        if(k == vetor[i]){ // se a variavel de entrada for igual ao num do vetor
            printf("\nA chave se encontra na posição %d do vetor!\n",i); // Será impresso o local onde ele se encontra. pois é o momento atual correspondente aos movimentos do loop
            count1=1; // variavel contador para servir como condição para os if abaixo
        } else{
            count2= 1;
        }
    }
    
    if(count2 ==1 && count1 == 0 ){ // Caso algum valor entrou em count 2 e não em count1
        printf("Não exite essa chave!"); //Será impresso essa mensagem
        
    }else if(count2 == 1 && count1 == 1){ // Caso contrário, se as duas variaveis receberam valores. Serão retormadas  valores para erro
        count1=0;
        count2=1;
       
    }else{
        printf("Erro"); // Caso não se enquadre nas condições acima. Será impresso mensagem
    }
   
    return 0;
    // Fim de programa
}