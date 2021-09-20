/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       RA= 159.214
-------------------------------------Lista 4--------------------------------------
3- Escreva um algoritmo que leia duas matrizes reais de dimensão 3 x 4, calcule e
imprima a soma das matrizes.
*/
#include <stdio.h>
#include <math.h>

int main(){

    int matrixA[3][4];// Atribuição das matrizes. Com valores maximos de cada. Será preciso 3 matriz. A ultima é para alocar o resultado da soma.
    int matrixB[3][4];
    int matrixC[3][4];
    int i,j;// Variaveis contadoras


    printf("Insira 12 valores para a primeira matriz:");// saída de dados para ajudar o usuario
    for(i=0; i< 3; i++){ // Primeiro loop irá pedir os valores da matriz e alocar nos respectivo endereços. O loop organizar os dados certos. O primeiro percorre a linha e o segundo a coluna 
        for(j=0; j < 4; j++){
            scanf("%d", &matrixA[i][j]); // A função de entrada.
        }
    }

    printf("Insira 12 valores para a segunda matriz:"); // O mesmo procedimento de cima. Só que aqui foi realizada com a matriz B
    for(i=0; i<3; i++){
        for(j=0; j < 4; j++){
            scanf("%d", &matrixB[i][j]);
        }
    }
    for(i = 0; i < 3; i++){ // Loop percorrer cada linha das matrizes A e b como também colunas e faz as somatorias de acordo com a formula de soma de matrizes
        for(j=0; j <4; j++){
            matrixC[i][j]= matrixA[i][j] + matrixB[i][j];
            printf("%d ",matrixC[i][j]); // E já é impresso a saída da matriz também.
        }    
        printf("\n"); // Essa quebra de linha é importante, pois se não tiver a saída será apenas em uma linha. Não ocorrer as quebras de linhas para surgir as colunas.
    }
    
   return 0;
   // fim  de programa 
}