/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lab 3--------------------------------------
5-Programa para classificar um triângulo. Informe os tamanhos dos segmentos e
classifique de acordo com equilátero, isósceles e escaleno.*/

#include <stdio.h>
#include <math.h>

main(){

    float lado1, lado2, lado3, isosceles, equilatero, escaleno;  //Atribuição de variaveis

    printf("Por favor, digite o valor do primeiro lado do triangulo:\n"); //Saida de dados para orientar usuario
    scanf("%f", &lado1); // Entrada de dados. Serão 3 solictações por causa dos lados do triangulo

    printf("Por favor, digite o segundo lado do triangulo:\n");
    scanf("%f", &lado2);

    printf("Por favor, digite o terceiro lado do tringulo:\n");
    scanf("%f", &lado3);

    if( (lado1 == lado2) && ( lado1 == lado3)){ // A primeira condição verifica se os dados da entrada são iguais. Caso seja verdade, resulta num tipo de triangulo da saída.
        printf("Seguimentos com medidas: %.1f %.1f %.1f. Todos os lados são iguais! \n Logo, forma um triângulo equilátero\n", lado1, lado2, lado3);
    } else if( (lado1 == lado2) || (lado1 ==  lado3) || (lado2 == lado3)){ //Se a condição acima for falsa, será verificado essa condição que pelo conectivo de "ou", abre a possibilidade de uma ser diferente e a condição ser verdadeira.  
        printf("Seguimentos com medidas:%.1f %.1f %.1f. Dois lados iguais e um diferente.\n Logo, forma um triângulo Isósceles\n", lado1, lado2, lado3);
    }else{ // Já se nenhuma das condiçoes acima forem verdadeiras, resulta num caso onde os dados das entradas são todos diferentes.
        printf("Seguimentos com medidas:%.1f %.1f %.1f.Nenhum dos lados são iguais!\n Logo, forma triângulo escaleno.\n", lado1, lado2, lado3);
    }
 
    return 0;
    //Finaliza o programa
}