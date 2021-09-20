/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       RA= 159.214
-------------------------------------Lista 2--------------------------------------
4- Programa que imprime o código ASCII de uma vogal dada pelo teclado. Considere
 apenas A, E, I, O e U. Use operadores ternários para a comparação.*/

#include <stdio.h>
#include <math.h>

// Código ASCII A= 65 , E=69, I= 73, O= 79, U=85

main(){

    int ascii; // Atribuição das variaveis
    char vogal;

    printf("Por favor, insira uma vogal:");
    scanf("%c",&vogal);

    ascii= (vogal == 'A') ? 65: // Operadores tenarios cadeados para para comparar e identificar o valor da variavel com o codigo ascii
           (vogal == 'E') ? 69:
           (vogal == 'I') ? 73:
           (vogal == 'O') ? 79:
           (vogal == 'U') ? 85: 1; // Caso o valor da variavel não seja verdadeiro em nehuma condição acima. A variavel irá receber 1.

    ascii ==1 ? printf("O código de ASCII fornecido não existe no conjuto das vogais!\n") : // Se a varivel contiver 1 será impresso essa mensagem
    printf("A vogal %c tem %d como caractere ASCII! \n", vogal, ascii); // Saida executada logo pois alguma codição for verdadeira nos operadores tenários      



    return 0;
}