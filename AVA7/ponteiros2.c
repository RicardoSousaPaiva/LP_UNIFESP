/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 7--------------------------------------
Ponteiros
*/

#include <stdio.h>

int main(void){
    
    int x= 123; //Variavel x recebe 123
    int *p; // ponteiro
    p=&x; // pondeiro aponta para endereço de memoria da variavel x

   //Saidas para verificar a atuação dos ponteiros na alocação de memoria 
    printf("Conteudo da variavel x: %d\n", x);
    printf("Endereço da variavel x:%p\n", &x);
    printf("Conteudo da variavel ponteiro de P: %p\n", p);
    printf("Conteudo da variavel ponteiro de P: %d\n", *p);

    return 0;
}