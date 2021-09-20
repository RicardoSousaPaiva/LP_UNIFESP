/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       RA= 159.214
-------------------------------------Lista 2--------------------------------------
2- Programa que lê um número inteiro e imprime seu sucessor e seu antecessor.*/

#include<stdio.h>

main(){
    int num, suc, ant; // Declaração das variaveis 

    printf("Por favor, insira um número inteiro: "); // Saida de dados para orientar usuario
    scanf("%d", &num); // Entrada de dados e armazenado no endereço de memoria da variavel num
    ant= num-1; // Variavel recebe valor de num e calcula +1
    suc= num+1; //Variavel recebe valor de num e calcula -1
    // Saida do valores de Antecessor, numero atual e sucessor 
    printf("Antecessor = %d\nNúmero escolhido= %d\nSucessor = %d\n", ant, num, suc); 
//Finaiza app
    return 0;
}
