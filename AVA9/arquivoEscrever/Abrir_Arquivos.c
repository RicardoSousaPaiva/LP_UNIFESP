/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 9--------------------------------------
1. Escrever e compilar todos os programas da Aula 11 (Arquivos)
*/
#include <stdio.h>

int main() {
  FILE *arq; // Ponteiro que irá manipular o arquivo
  arq = fopen ("arquivoescrever.txt", "w"); //Cria e abre o arquivo. O modo de abertura é "w", isto é, escrita
  if (arq == NULL) // se os parametros de entradas derem erros. 
  printf ("Erro ao abrir arquivo\n");//Será impresso mensagem de erro
  else // Caso contrário
  printf ("arquivo aberto para leitura\n"); //Será impresso mensagem
  fprintf(arq, "Olá! Consigo escrever dentro do arquivo por meio do programa em C!\n"); // e dentro do arquivo será escrito essa mensagem
  fclose (arq);// Fecha o arquivo
  return 0;//Finaliza o programa
}