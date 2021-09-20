/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lab 3--------------------------------------
6- Faça um programa que calcule o MDC - Máximo Divisor Comum e MMC - Mínimo
Múltiplo Comum de dois números informados pelo usuário.*/

#include <stdio.h>
#include <math.h>


main(){

    int num1, num2,resto,mdc,mmc,a2,a3; // Atribuição de variaveis

    printf("Digite o primeiro número inteiro:\n"); // Saídas de dados para o usuario
    scanf("%d", &num1); // Entrada de dados do primeiro numero

    printf("Digite o segundo número:\n");
    scanf("%d",&num2); // Entrada de dados do segundo numero

        a2= num1;// aloquei os valores nessas variaveis, pois dentro do loop eles serão modificados
        a3= num2;

        while (num2 != 0){ // Para calcular o MDC usei o algoritmo de Euclides

            resto= num1 % num2; // O resto da divisão dos dois numeros será alocado na váriavel "resto"
            num1= num2; // e a variavel num1 passará a ser num2
            num2= resto; // e o num2 será atualizada pelo valor do resto. Isso vai ocorre até quando o num2 for igual a 0
        }

        mdc= num1*(num2/num2); 
        mmc= a2*a3/mdc; //Para calcular o MMC apenas usei a formula padrão com o valor obtido do MDC de num1 e num2
    
    printf("Valor do MMC: %d\nValor do MDC: %d\n", mmc,mdc); // Saídas dos resultados
    
    return 0;
    //Finalização do programa
}


