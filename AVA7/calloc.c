/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 7--------------------------------------
Função Calloc
*/

#include <stdio.h>
#include<stdlib.h>

/* Como observado a fução Calloc criar um vetor de tamanho dinâmico, ou seja, 
definido durante a execução do programa.
*/

int main(void){
    int *v;
    int i, n;

    printf("Insira o tamanho do vetor:");
    scanf("%d", &n);

    v= (int*) calloc(n, sizeof(int)); 
    for( i=0; i < n; i++){
        printf("Insira o elemento %d: ", i+1);
        scanf("%d", &v[i]);
    }
    for(i=0; i < n; i++){
        printf("a[%d] = %d", i, v[i]);
    }
    free(v);
    return 0;
}