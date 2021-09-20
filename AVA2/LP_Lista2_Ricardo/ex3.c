/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       RA= 159.214
-------------------------------------Lista 2--------------------------------------
3- Programa que imprime se um dado número é par ou ímpar, sem o uso de if e else.*/

#include <stdio.h>
#include <math.h>
main(){ //Função principal

    int num; //Declaração de uma variavel tipo inteiro
    
    printf("Digite um número inteiro: "); // Saida de dados para orientar o usuario
    scanf("%d",&num); // Entrada de Dados e alocação na variavel
    printf("O número %d é %s!\n", num, (num%2) == 0 ? "Par":"Impar"); // Saida de dados com a resolução do operador tenário. 
    //Se o resto da divisão por dois for igual a dois, o numero é par. Caso contrário impar.   
    
    return 0;
}