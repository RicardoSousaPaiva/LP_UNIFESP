/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 7--------------------------------------
*/

#include <stdio.h>

//alocação de memoria usando ponteiros e funções
void incr_vetor(int n, int *v){
    int i;
    for(i=0; i < n; i++){
        v[i]++;
    }
}
int main(void){
    
    int a[]={1,3,5};
    incr_vetor(3,a);
    printf("%d %d %d\n", a[0], a[1], a[2]);
    
    return 0;
}