/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 5--------------------------------------
4- Faça um programa que leia um string e faça com que a primeira letra de cada
palavra fique em maiúscula. Para isso, basta subtrair 32 do elemento que deseja
alterar para maiúsculo chrNome[0] = chrNome[0] – 32;
Ex. Entrada: lab. de linguagem de programação Ex. Saída : Lab. De Linguagem
De Programação
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
        char chrNome[30]; // Atribuição de vetor tipo char para trabalhar com dados tipo string
        int i; // Variavel contador

        printf("Digite uma frase comletras minúsculas:\n"); // saida de dados para orientar usuario
        
        fgets(chrNome, 30, stdin); // função de entrada para string. Usei ela, pois com scanf está dando erros.  
        
        if(chrNome[0] != ' '){ // condições que irão caminhar pelo vetor.  Será reduzindo -32 por causa da referencia do codigo ascii em relação as maisculas 
            chrNome[0]=chrNome[0]-32;

        }
        for(i=1; chrNome[i] != '\0'; i++ ){ // todos valores diferentes de \0
            if(chrNome[i-1] == ' ' && chrNome[i] != ' '){ 
                chrNome[i]= chrNome[i]-32;
            }
        }
        printf("A frase modificada é: %s", chrNome); // Saida com a string já modificada
        
 return 0;
 // Final de programa
}