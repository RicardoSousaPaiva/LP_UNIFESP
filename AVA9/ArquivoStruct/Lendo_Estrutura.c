/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva      
-------------------------------------Lista 9--------------------------------------
1. Escrever e compilar todos os programas da Aula 11 (Arquivos)
*/
#include <stdio.h>
typedef struct pessoa{ // Definindo estrutura
  char nome[30]; //com variavel tipo char
  int idade; // e inteiro
  }Pessoa;

int main() {
 FILE *arq;
 arq = fopen ("pessoas.txt", "rb");// Tipo de entrada binário. O arquivo deve existir
 Pessoa p; // Criação de variavel tipo pessoa
 while (fread(&p, sizeof(Pessoa), 1, arq) != 0){ // enquanto p tiver dados
   printf ("Nome: %s -Idade: %d", p.nome, p.idade); //Será impresso a mensagem dos dados inseridos
 }
 fclose (arq);// Fecha arquivo
  return 0;// Finaliza programa
}