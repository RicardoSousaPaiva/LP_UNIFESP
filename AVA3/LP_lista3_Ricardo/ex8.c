/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lab 3--------------------------------------
8-Escrever um algoritmo que lê um valor n inteiro e positivo e que calcula e escreve o
valor de K.*/

#include<stdio.h>
#include<math.h>

main(){
    
    int numero,count; // Declaração da variaveis. Essas serão de tipo inteiro, pois serão usadas como contadores
    float fatorial, divisao, k;

    printf("POr favor, digite um número inteiro e positivo:");// Saídas de dados para ajudar o usuario
    scanf("%d",&numero); // Entrada de dados que define o limite da somatoria.
    
    k=1; 
    count=numero;
    

    while (numero != 0){ // Será pecorrido um loop decrescente. Tendo como intervalo para percorrer o valor indicado pelo usuario
      for(fatorial=1; numero>1; numero--){ // loop do for irá calcular a parte do fatorial. Também terá um loop decrescente 
          fatorial= fatorial*numero; //A variável fatoral será atualizada durante o loop pelo valor dentro dela multiplicado pelo valor do loop atual
      }
      divisao= 1/ fatorial; // Operação para calcula o quoeficiente de 1 pelo resultado do fatoral
      numero=count;
      k+=divisao;//Operação calcula o valor restante da formula do enunciado.
      numero--; // Variavel contador que tem loop decrescente
      count=numero; // Pegando o valor de numero antes de ser atualizado 
    } 
    printf("o valor de k é = %.1f\n", k); // Saida de dados com o valor de K final
    
    return 0;
    //Final do programa
}
    