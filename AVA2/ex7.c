/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva 
-------------------------------------Lista 2--------------------------------------
7- Programa que calcula juros compostos. A fórmula para calcular os juros compostos é
dada por: M = C(1+i)^t  j= M-c.*/

#include <stdio.h>
#include <math.h>

int main(){ // Função principal

    float m, c, i, t, j; // Declaração das variaveis tipo float

    i= 0.01; // Variavel receber valor pre-definido 

    printf("Informe o valor do capital: "); // Saida para orientar usuario
    scanf("%f", &c ); // Entrada de dados para usar no calculo

    printf("Informe a quantidade dos meses: ");
    scanf("%f", &t);

    m= c* pow((1+i),t); // Calculo para saber o montande. Foi usado a função pow que é potencia.
    j=m-c; // Depois com o resultado de m será calculado o juros

    printf("O valor do juros é %.2f", j); // Saida do valor com limitação de duas casas decimais de numeros significativos

    return 0; // Final do programa
}