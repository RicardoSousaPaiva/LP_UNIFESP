/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva     RA= 159.214
-------------------------------------Lista 2--------------------------------------

10. Programa que verifica se o ano é bissexto. Use operadores ternários para a
comparação. Condições para ser ano bissexto:*/

#include <stdio.h>
#include <math.h>

int main(){ // Função principal

  int ano; // Declaração de variavel tipo inteiro

  printf("Digite o ano: "); //Saida de dados para orientar os usuarios
  scanf("%d", &ano); //Entrada de dados  e alocação de valor no endereço de memoria da variavel

  /* Usado operadores tenarios para realizar as condições necessários para ano ser considerado bissexto:
  Primeiro, precisa ser divisível por 4 e não divisível por 100. Por ultimo, se for divisível por 4 e divisível por 100. 
  Precisa ser também divisível por 400. Os casos falsos para essas condições não são anos bissexto.
  Cada condição já vem com a função print para saida de dados da respectiva condição*/

  (ano%4) == 0 && (ano%100) != 0  ? printf("Ano Bissexto!\n") :
  (ano%4) == 0 && (ano%100) == 0 && (ano%400) == 0 ? printf("Ano é bissexto!\n"):
  printf("Ano não é bissexto!\n");
  
  //Fim do programa
  return 0;


}