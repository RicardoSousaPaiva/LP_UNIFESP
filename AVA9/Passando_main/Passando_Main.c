/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 9--------------------------------------
1. Escrever e compilar todos os programas da Aula 11 (Arquivos)
*/
#include <stdio.h>

int main(int argc, char *argv[]) { // Função receber dois argumentos: o arquivo e uma string
  FILE *fr, *fw; // Dois ponteiros que irão acessar os arquivos
  char c; // Char para alocar os dados string
  fr = fopen (argv[1], "r"); // abre o arquivo com tipo de entrada leitura. O arquivo já existe
  fw = fopen (argv[2], "w"); // Abre o arquivo com tipo de entrada escrita. Cria um novo arquivo. Caso exista substitui o anterior
  if (fr == NULL) // condiçoes irão verificar  se existe dados no arquivos. Caso não exista será retorna 1. Programa ficaliza por causa de erro
  return 1;
  if (fw == NULL)
  return 1;
  while (fscanf (fr, "%c", &c)!= EOF) // Loop irá pecorrer a string até o final d arquivo, representada pela constante EOF (End of File).
  fprintf (fw, "%c", c);// Será escrito no arquivo2 que foi criado os dados do arquivo1 que estão alocados em c  
  fclose(fr); // Fecha arquivo1
  fclose(fw); //Fecha arquivo2
  
  return 0; // Finaliza programa com sucesso
}