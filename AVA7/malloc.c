/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 7--------------------------------------
Função Malloc
*/

#include <stdio.h>
/*Fucao malloc loca espaço para um bloco de bytes consecutivos na memória RAM (= random access memory) 
do computador e devolve o endereço desse bloco.
*/
int main(void){
    
    int*a;
    a=(int*)malloc(1*sizeof(int));
    a=123;
    free(a);
    return 0;

    return 0;
}