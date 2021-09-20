/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 9--------------------------------------
1. Escrever e compilar todos os programas da Aula 11 (Arquivos)
*/
#include <stdio.h>
typedef struct pessoa { // Criação de structs pessoas
  char nome [30]; // com tipo de variavel char  e inteiro
  int idade;
}Pessoa;

int main() {
  FILE *arq; //ponteiro que irá manipular os arquivos
  arq = fopen ("pessoas.txt", "a+"); // função abre arquivo e tipo de entrada que adiciona dados no arquivo
  Pessoa p; // variavel p do tipo pessoa
  printf ("Insira o nome: ");// Saída de dados para orientar usuario
  scanf ("%s[^\n]", p.nome); // entrada de dados e alocado em p.nome
  printf ("Insira a idade: ");
  scanf ("%d", &p.idade); // Outra entrada de dados alocado na variavel p.idade
  fwrite(&p, sizeof(Pessoa), 1, arq); // Função irá escrever os dados de entradas no arquivo
  fclose(arq); // Fecha arquivo
  
  return 0;// finaliza programa
}