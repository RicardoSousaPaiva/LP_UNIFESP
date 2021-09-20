/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lab 3--------------------------------------
9-Programa que soma de todos os números ímpares que são múltiplos de 3 e que se
encontram no intervalo de dois números dados pelo usuário*/

#include <stdio.h>
#include <math.h>

int main(){
  int ponto1,ponto2,i;// Declarando as variáveis
  int soma=0;

  printf("Digite o primeiro ponto do intervalo:\n"); // Saida de dados para ajudar o usuario
  scanf("%d", &ponto1); // Entrada de dados que será solicitada duas vezes para atender aos pontos do intervalo

  printf("Digite o segundo ponto do intervalo:\n");
  scanf("%d", &ponto2);

  for(i= ponto1; i <= ponto2; i++){ //O loop crescente irá percorrer todo o intervalo, tendo como limite o fim do intervalo.
    if((i%2 != 0) && (i%3 == 0)){ // Condição irá verificar se o número é impar e se é multiplo de 3. Caso seja verdadeira,
      soma= soma+i; // Irá somando os valores de acordo com a atualização do loop no intervalo. 
    }
  }
  printf("A soma dos números ímpares múltiplos de 3 no intervalo de %d a %d é = %d \n",ponto1,ponto2, soma); // Saída dos dados finais
  
  return 0;
  //Final do programa
}