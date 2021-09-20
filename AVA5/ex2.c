/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 5--------------------------------------
2- Faça um programa usando vetores que leia o nome de 5 pessoas e mostre os
nomes armazenados.
*/
#include<stdio.h>

int main(){

    char people1[20], people2[20], people3[20], people4[20], people5[20]; // Atribuição de vetores. Cada vetor para uma string
    

    printf("Escreva o nome das 5 pessoas:\n");// dados de saída para orientar o usuario 
    scanf(" %[^\n] %[^\n] %[^\n] %[^\n] %[^\n]", people1, people2, people3, people4, people5);// Entradade de dados de tipo string. É recebido o dado pela função no momento que o usuario aperta enter.
    
   
    printf("Segue os 5 nomes inseridos:\n %s\n %s\n %s\n %s\n %s\n",people1, people2, people3,people4, people5);// Saida de dados com os nomes das pessoas.
 

    return 0;
    //Fim de programa
}

    
