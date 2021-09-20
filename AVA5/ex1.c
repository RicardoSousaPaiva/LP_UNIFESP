/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 5--------------------------------------
1- Escreva um programa que leia um string, conte quantos caracteres desta string são iguais a ’a’ e substitua os que forem iguais a ’a’ por ’b’.
O programa deve imprimir o número de caracteres modificados e o string modificado
*/

#include<stdio.h>
#include<string.h>
int main(){

    char seletor[100];// Atribuição de vetor
    int i, count;

    printf("Escreva o nome que deseja trocar as letras de a por b:\n");
    scanf(" %[^\n]", seletor);

    while(seletor[++i] != '\0'){ // Loop que irá acontecer até quando se deparar com \0

        if (seletor[i] == 'a'){ // Se valor localizado no vetor ser a 
            seletor[i]= 'b'; // será substiido por b
            count+=i; // Variavel contadora. Para saber o numero de loop que foi necessário para encontrar a
        }
    }

    printf("Foram modificados %d caracteres. A palavra ficou: %s", count, seletor);// Saidas com os resultados
    return 0;
    // Fim de programa
}