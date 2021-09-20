/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       RA= 159.214
-------------------------------------Lista 2--------------------------------------
1- Programa que imprime a média aritmética de dois grupos com 3 notas em cada.
Calcule também a média das médias dos grupos. As notas devem ser informadas via
teclado.*/

#include<stdio.h>

main(){ // função principal onde acontece todo o algoritmo
    int a,b,c,d,e,f; // Declaração das variaveis tipo inteiro
    float mediaG1, mediaG2,mediaT; //Declaração das variaveis tipo inteiro

    printf("Quais são as notas do primeiro grupo?"); // Saida de mensagem para orientar o usuario
    scanf("%d  %d  %d",&a,&b,&c); // entradas de dados e armazenadas no endereço de memoria das variaveis.

    printf("Quais são as notas do segundo grupo?");
    scanf("%d  %d  %d", &d, &e, &f);

    mediaG1= (a+b+c)/3; // operação para saber da media e alocar na variavel
    mediaG2= (d+e+f)/3;

    mediaT= (mediaG1+mediaG2)/2;

// Saida dos valores das médias na tela
    printf("A média do grupo 1 é %.2f\n", mediaG1); 
    printf("A média do grupo 2 é %.2f\n", mediaG2);
    printf("A média entre os dois grupos é %.2f\n", mediaT);

    return 0; // Finalização do app
} 