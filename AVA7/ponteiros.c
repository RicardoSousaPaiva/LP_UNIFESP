/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 7--------------------------------------
Ponteiros
*/

#include <stdio.h>

int main(void){
    int a,b, *p;
    a= 10;
    p=&a;
    *p=7; // É armazenado 7 no espaço de memoria que o ponteiro aponta
    b=a+(*p);
    printf("%d", b);

    return 0;
}