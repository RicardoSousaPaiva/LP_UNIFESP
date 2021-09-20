/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva      
-------------------------------------Lista 7--------------------------------------
Funçoes Calloc e Realloc
*/
#include <stdio.h>

// Como observado a função realloc é usada para redimensionar um espaço alocado pela função calloc

int main(void){

    int *v;
    int i,n;
    printf("Insira o tamanho do vetor:");
    scanf("%d", &n);
    v= (int*) calloc(n,sizeof(int));
    for(i=0; i < n; i++){
        printf("Insira o elemento %d", i+1);
        scanf("%d", &v[i]);
    }
    for(i=0; i <n; i++){
        printf("a[%d]", i, v[i]);

     v= realloc(v, (n+3)*sizeof(int));

     for(i=n; i < n+3; i++){
         printf("Insira o elemento %d", i+3);
         scanf("%d", &v[i]);
     }
     for(i=0; i < n+3; i++){
         printf("a[%d] = %d", i, v[i]);
         free(v); //Função limpa memoria
         return 0;
     }   

    }

    return 0;
}