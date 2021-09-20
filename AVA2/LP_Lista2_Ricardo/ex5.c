/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       RA= 159.214
-------------------------------------Lista 2--------------------------------------
5- Programa que imprime a distância entre dois pontos no plano A(xa,ya) e B(xb,yb). Os
pontos devem ser informados via teclado. A fórmula da distância entre dois pontos é
dada por:*/

#include <std.io>
#include <math.h>

main(){ // Função principal
    
    float dist, xa,ya,xb,yb; // Declarar as variaveis

    printf("Insira o primeiro valor do ponto A: "); // Saidas para orientar o usuario
    scanf("%f",&xa); // Entrada de dados e  alocação na variavel. %f por que o tipo de dado e float. & porque será locado no endereço de memoria da variavel

    printf("Insira o segundo valor do ponto A: ");
    scanf("%f",&ya);

    printf("Insira o primeiro valor do ponto B: ");
    scanf("%f", &xb);

    printf("Insira o segundo valor do ponto B: ");
    scanf("%f", &yb);

    dist= sqrt(pow(xb-xa,2)+ pow(yb-ya,2)); // Feita a operação a partir da formula padrao para calcular a distancia entre os pontos. sqrt é a função para raiz quadrada e pow é a função para potencia

    printf("A distância do ponto A para o ponto B é %.2f", dist); // Impresso o valor já calculado que foi atribuido na variavel dist

// Final do programa
    return 0;
}