/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 8--------------------------------------
2.Escreva uma função que receba um número inteiro que representa um intervalo de tempo medido em minutos e
devolva o correspondente número de horas e minutos (por exemplo, converte 131 minutos em 2 horas e 11
minutos).
*/

#include<stdio.h>
#include<stdlib.h>
main(){

    struct hm{ // struct hm com duas variaveis de tipo inteiro 
        int horas;
        int minutos;
    }entrada, calculo; // Declaração global de variaveis tipo hm

    int minutos2;

    printf("Qual o valor de minutos que deseja converter? "); // Saída de dados para orientar o usuario
    scanf("%d", &entrada.minutos); // Entrada de dados e armazenado no campo minutos da struct

    calculo.horas= entrada.minutos/60; // Calculo realizado para converter minutos e horas e armazenado no campo horas 
    minutos2= entrada.minutos%60;

    printf("O valor de %d minuto(s) corresponde a %d hora(s) %d minuto(s)! \n", entrada.minutos, calculo.horas,minutos2 );//Saída de dados dos valores alocados em minutos e horas

    return 0;
    //Fim do programa
}