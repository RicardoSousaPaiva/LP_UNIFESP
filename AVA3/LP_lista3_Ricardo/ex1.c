/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lab 3--------------------------------------
1-Programa para calcular o consumo médio de combustível*/

#include <stdio.h>
#include <math.h>

main(){

    float consMedio, distancia, combustivel; // Declarando variaveis

    printf("Qual a distância percorrida pelo carro?\n "); // Imprimindo saída de mensagem para usuario
    scanf("%f", &distancia); // Alocação de memoria. Entrada de dados
    printf("Qual a quantidade de combustível utilizada?\n");
    scanf("%f", &combustivel);

    consMedio= distancia/combustivel; // Operação para saber o consumo medio: distancia dividido pelo combstivel

    printf(" O consumo médio é %.2f\n", consMedio); //Saída de dados


    return 0; // Finaliza programa
}
