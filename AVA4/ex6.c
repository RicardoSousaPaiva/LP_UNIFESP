/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 4--------------------------------------
6- Escreva um programa que receba duas matrizes A e B e retorne C = A ∗ B.
*/
#include <stdio.h>

int main(){
    int matrizA[30][30], matrizB[30][30], matrizC[30][30]; // Atribuição das matriz com os valores maximos
    int i, j, k, linhaA,colunaA, linhaB,colunaB, linhaC, colunaC, soma, resultadoSoma; // variaveis que serviram como contadores e também para armazenar resultados


    printf("Por favor, digite a quantidade de linhas da Matriz A:\n"); // dados de saídas
    scanf("%d", &linhaA); // dados de entrada para saber o numeros de linhas ma A

    printf("Digite a quantidade de colunas da matriz A:\n"); // Dados de saídas
    scanf("%d", &colunaA); // Entrada de dados para quatidade de colunas. São essas entradas que determinar o tamanho da matriz mxn 

    for(i=0; i < linhaA; i++){ // Loop para alocar dados na matriz A. i corresponde ao loop das linhas e k da coluna
        for(k=0; k < colunaA; k++){
            printf("Insira valores para matriz A: ");// Saida de dados para orientar o usuario
            scanf("%d", &matrizA[i][k]); // Entrada de dados alocados direto na matriz
        }
    }

    printf("Digite a quantidade de linhas da matriz B:\n"); // O mesmo processo ocorrido acima. Agora será para a matriz b. Definir tamanho de linha e colunas
    scanf("%d", &linhaB);

    printf("Digite a quantidade de colunas da matriz B:\n");
    scanf("%d", &colunaB);

    if( colunaA == linhaB){ // Condição de existencia para multiplicação de matrizes é a quantidade de coluna da matriz A deve ser igual a quantidade de linha da matriz B. 
        for(i=0; i < linhaB; i++){
            for(k=0; k < colunaB; k++){
                printf("Insira valores para matriz B: ");
                scanf("%d", &matrizB[i][k]); // dados sendo alocados direto na matriz. Os dois for encadeados garantem que esses dados serão armazenas conforme estrutura de matriz mxn 
            }
        }
        printf("\nA x B = \n");
        linhaC=linhaA; // Conforme é previsto na formula de multiplicação de matriz as linhas da matriz resultado terão a quantidade das linha da matriz A e
        colunaC=colunaB; // e as colunas da matriz resultado terão a mesma quantidade da coluna B
        resultadoSoma= colunaA;

        for(i=0; i < linhaC; i++){ // a estrutura para multiplicar matrizes precisa de 3 loops.
            for(k=0; k < colunaC; k++){ // Os mais externos serão responsáveis por percorrer as linhas e colunas 
                soma=0;
                for(j=0; j < resultadoSoma; j++){
                    soma+= matrizA[i][j] * matrizB[j][k]; // O interno irá calcular os valores coluna da matriz A e linhas matriz B. A multiplicação final desse loop interno será alocado na variavel soma      
                }
                matrizC[i][k]= soma; // que alocará os resultados em outra matriz. A matriz resultado
                printf("%3d", matrizC[i][k]); // Apos, será impressa a matriz
                
            }
            printf("\n"); // Quebra de linha é necessária para haver a existencia das colunas na matriz.
        }


    }else{ // Condição se a pessoa digitou  de mxn que não é possível multiplicar. Conforme regra de multiplicação dematrizes. 
        printf("Para multiplicação de Matrizes é necessário que a quantidade de colunas da matriz A seja igual as linhas da Matriz B\n");
    }
    return 0;
    // Final de programa
}