/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lab 3--------------------------------------
7-Faça um programa que imprima todos os números quadrados perfeitos de um
intervalo informado pelo usuário. Números quadrados perfeitos são números cuja
raiz quadrada resultam em um valor inteiro.*/


#include <stdio.h>
#include <math.h>

int main(){
  int i, ponto1,ponto2,raiz; // Declaração das variaveis

  printf("Digite o primeiro ponto do intervalo:\n"); // Saídas de dados para ajudar o usuario
  scanf("%d", &ponto1); // Serão solicitados duas entradas de dados que refere-se as pontos do intervalo

  printf("Digite o segundo ponto do intervalo:\n");
  scanf("%d", &ponto2);

  for(i=ponto1; i <= ponto2; i++){ //O for irá percorre o loop, tendo como limite o intervalo final
    raiz= sqrt(i); // Função irá calcular a raiz do valor do i. No caso será o valor dos loops que irá pecorrer todo o intervalo.
    if(pow(raiz,2) == i)// se o valor dessa potencia de 2 da raiz for igual a um número inteiro será impresso o valor de 1
    
    printf("%d ",i);
  }
 
  return 0;
 //Final do programa
}