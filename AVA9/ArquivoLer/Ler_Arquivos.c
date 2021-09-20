/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 9--------------------------------------
1. Escrever e compilar todos os programas da Aula 11 (Arquivos)
*/
#include <stdio.h>

int main() {
  FILE *arq; //Ponteiro que irá manipular arquivo
  char c; // variavel tipo char para recerbe dados do arquivo
  arq = fopen ("arquivoleia.txt", "r"); // Função abre arquivo, tipo de entrada apenas leitura
  if (arq == NULL) // Caso, não tenha alguma informação no arquivo
  printf ("Erro ao abrir arquivo\n"); // Será impresso essa mensagem
  else // Caso contrário
  printf ("Arquivo aberto para leitura \n"); // Será impresso essa mensagem
  c = getc(arq); // C irá receber o dados de arq
  while (c!= EOF){
    printf ("%c", c); // E será impresso no monitor os dados dentro de c que eram os dados dentro do arquivo
    c = getc(arq);
  }
  fclose(arq); //Será fechado o arquivo
  
  return 0;// E finalizado o programa
}