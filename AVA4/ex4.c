/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 4--------------------------------------
4- Uma imagem em RGB pode ser representada por uma matriz tridimensional, sendo
que cada dimensão guarda os valores das intensidades de Vermelho, Verde e Azul para
cada pixel. Declare a matriz para armazenar uma imagem RGB de 128 x 128 pixels.
*/

#include <stdio.h>
#include <math.h>

#define linha 128
#define coluna 128
#define profundidade 3


int main(){

    int pixel[linha][coluna][profundidade]; // Criação de matriz para representa imagem RGB. Matriz com duas dimensões e com profundidade 3.
    int l, c, rgb;

    for(l=0; l < linha; l++){ //  percorrendo a matriz pelas  linhas
        for(c=0; c <coluna; c++){ // pelas colunas
            for(rgb=0; rgb <3; rgb++){ // for que direciona a profundidade
                pixel[l][c][rgb]=0;
            }
        }
    }

    while(l != -1){ // enquanto não usuario digitar menos -1 o loop não encerra
        printf("Escolha um pixel (128x128), mxn: <1x128> ");// saída pedindo os valores dos pixel
        scanf("%dx%d", &l, &c); // entrada de dados de tipo inteiro que irá alocar parametros da matriz
        l= l-1;
        c= c-1;

        //Entradas solicitando os valores dos pixel para o usuario. Cada pixel tem um valor especifico
        printf("Digite R: ");
        scanf("%d", &pixel [l][c][0]);

        printf("Digite G:");
        scanf("%d", &pixel [l][c][1]);

        printf("Digite B:");
        scanf("%d", &pixel [l][c][2]);

        printf("Deseja digita outra pixel? [1= YES, -1= No]:");
        scanf("%d", &l);
     } 

    for(l=0; l < linha; l++){ // loop para imprime matriz. Como é uma matriz que tem dimensão de profundidade. É necessario 3 loops
        for(c=0; c < coluna; c ++){
            printf(" [ ");
            for(rgb=0; rgb <3; rgb++){ // o loop de profundidade terá como limite de refencia 3 que é o valor de camadas de profundidade
                printf("%d", pixel[l][c][rgb]); 
            }
            printf("] ");// saida indicar divisão da profundidade da matriz
        }
        printf("\n"); // Saída necessária para existencia das colunas.
    }
    return 0;
    // Final de programa   
}