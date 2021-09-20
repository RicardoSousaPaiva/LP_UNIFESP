/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lab 3--------------------------------------
3-Faça um programa que calcule a velocidade v(t) e a altura do lançamento h(t) no instante t de uma bola arremessada para cima numa velocidade v0, onde a resistencia do ar é desprezada:
Considere: g= 9,81m/s² v(t)= v0-gt h(t)= v0t-gt²/2
*/
#include<stdio.h>
#include<math.h>

main(){

    float g,v,h,vo,t; // Declaração de variaveis

    printf("Informe o valor do tempo:"); // saída de dados
    scanf("%f", &t); // Entrada de dados. O valor do tempo para poder calcular v e h

    vo= 0;
    g= 9.81; // Atribuição de valores definidos no enunciado nessas variaveis

    v= g*t; // Operação para calcular a velocidade
    h= (g* pow(t,2))/2; // Operação para calcular a altura. Usei a função pow que calcula o tempo na potencia de 2

    printf("O valor da V(t) é %.1f m/s² e h(t) é %.1f m", v,h); // Saídas de valores calculados

    return 0;
    //Finaliza programa
}
