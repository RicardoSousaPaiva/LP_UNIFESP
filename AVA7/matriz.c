/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 7--------------------------------------
Matrizes em alocação dinamica
*/

#include <stdio.h>

int main(void){
   
   int *mat;
   int l=3;
   int c=2;
   int k=0;

   mat= (int*) malloc(l*c*sizeof(int));

   for(int i=0; i<l; i++){ 
       for(int j=0; j<c; j++){
           mat[i*c+j]= k;
           k++;
       }
   } 

    return 0;
}