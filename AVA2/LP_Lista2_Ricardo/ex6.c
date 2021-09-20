/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       RA= 159.214
-------------------------------------Lista 2--------------------------------------
6- Programa que transforma segundos em horas, minutos e segundos.*/

#include <stdio.h>
#include <math.h>

int main() // Função principal
{
    int seconds, hours, minutes,seconds2; // Declaração das variaveis de tipo inteiro

    printf("Insira os segundos para converter em horas: "); // Saida para orientar o usuario
    scanf("%d", &seconds ); // Entrada de dados

// Realizado as operações para calcular a conversão de segundos para horas e minutos para segundos
    hours= seconds/3600;

    minutes= (seconds%3600)/60;

    seconds2= seconds%60; 

// Saida de valores 
    printf("O valor de %d segundos equivale a %d horas, %d minutos e %d segundos!\n", seconds, hours, minutes,seconds2);




//Final do programa 
    return 0;
}
