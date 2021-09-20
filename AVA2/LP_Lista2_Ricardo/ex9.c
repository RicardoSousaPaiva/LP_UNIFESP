/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       RA= 159.214
-------------------------------------Lista 2--------------------------------------

9- Programa que calcula o IMC - Índice de Massa Corporal. Use operadores ternários para a comparação.
A fórmula para calcular IMC é dada por:
IMC= peso/altura²

< 18.5= abaxo do peso
18.5 -24.9 = Peso normal
25.0- 29.9 = Sobrepeso
30.0 -34.9 = Obesidade grau 1
35 - 39.9 = Obesidade grau 2
>= 40 = obeseridade grau 3 ou morbida  */

#include <stdio.h>
#include <math.h>

int main(){ // Função principal

    float IMC, peso, altura; // Declaração de variavel tipo float

    printf("Qual o valor do seu peso? "); // Saida de dados para orientar o usuario
    scanf("%f", &peso); // Entrada de dados e alocação no endereço de memória da variavel peso

    printf("Qual o valor da sua altura?");
    scanf("%f", &altura);

    // Formula para saber o IMC. Foi usado a função pow que calcula a potencia
    IMC= peso/ pow(altura,2);

    //Para cada especificação feita no enunciado foi usado operadores tenarios
    (IMC) >= 40 ? printf("O seu nível de obesidade é altíssimo: grau 3 ou morbida!\n") : // Para cada valor definido na tabela o operador comparar com o valor da varivel
    (IMC) > 35.0 ? printf("Atenção redobrada! Você está com obesidade grau 2!\n") :       
    (IMC) > 30.0 ? printf(" Muito cuidado! Você está com obesidade grau 1!\n") :
    (IMC) > 25.0 ? printf("Cuidado! Você está com sobrepeso!\n") :
    (IMC) > 18.5 ? printf("Você tem o peso normal!\n") : printf("Você está abaixo do peso!\n");
    
    // Finalização do programa
    return 0;
}