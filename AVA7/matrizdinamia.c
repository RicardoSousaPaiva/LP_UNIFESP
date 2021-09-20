/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 7--------------------------------------
*/

#include <stdio.h>

int main(void){
    int **mat;
    int l=3;
    int c=2;
    int k=0;
    // cada elemento do vetor armazena o endereço de memoria do primeiro primeiro lugar da linha
    mat- (int**)malloc(l*sizeof(int*));
    for(int i=0; i<l; i++){
        mat[i]=(int*)malloc(c*sizeof(int));    
    }
    for(int i=0; i<l;i++){
        for(int j=0; j<c; j++){
            mat[i][j]=k;
            k++;
        }
    }
    for(int i=0; i<l; i++){
        free(mat[i]); //Função para liberar memoria deixada nas variaveis alocadas dinamicamente  
    }
    free(mat);
    return 0;
}