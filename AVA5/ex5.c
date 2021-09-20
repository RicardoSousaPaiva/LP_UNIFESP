/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 5--------------------------------------
5- Faça um programa que receba 2 strings (A e B) e retorne um terceiro string (C)
formado pelos caracteres de A e B intercalados. Ex.: Se A=’Quarta’ e
B=’Segunda’, a resposta deve ser ’QSueagrutnada’.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char A[30], B[30], C[60]; // Atribuição das variaveis
    int i, limite, tamanhoA, tamanhoB,comecoA, comecoB; // variveis contadoras e armazenas resultados

   
    printf("Digite string A: ");// Saida de dados para ajudar o usuario.
    scanf(" %s", A);// Entrada de dados de tipo string .  Será solicitado duas entradas de string

    printf("Digite string B: ");
    scanf(" %s", B);

    tamanhoA= strlen(A); // Função que retonar tipo inteiro do tamanho da variavel. Será necessário para ter parametros para as condições abaixo 
    tamanhoB= strlen(B);
    limite= tamanhoA+tamanhoB; // Limite total é soma de tamanhos da duas strings

    for(i=0; i < limite; i++){ // Loop terá como referencia a soma dos tamanhos dos vetores A e B
        
        if(i % 2 == 0 &&  comecoA < tamanhoA){ // O importante é verificar se o indice de cada string não ultrapasse limite os tamanhos previstos
            C[i]=A[comecoA++];
        }else if( comecoB >= tamanhoB){
            C[i]= A[comecoA++];
        }else{
            C[i]=B[comecoB++];
        }
    }
    printf("%s", C); // saída de dados com string resultado

    return 0;
    // Fim de programa
}