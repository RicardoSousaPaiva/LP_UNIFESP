/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 5--------------------------------------
3- Uma empresa concederá um aumento de salário aos seus funcionários, variável
de acordo com o cargo: Gerente=10% Engenheiro=20% Auxiliar=30%

Faça um programa que leia o salário e o cargo de um funcionário e calcule o
novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá então
receber 40% de aumento. Mostre o salário antigo, o novo salário e a diferença..
*/
#include<stdio.h>
#include<string.h>

int main(){

    char cargo[50];// Atribuição de vetor tipor char para  receber strings
    float salario, novo_salario, diferenca;
    int gerente,engenheiro,auxiliar;

    salario=0; // variaveis serão usadas em condições de if. Para evitar lixo de memoria na declaração defino o valor delas.
    novo_salario=0;

    printf("Informe o cargo:"); // Saida para orientar o usuario
    scanf("%s", cargo); // dado de entrada tipo string

    printf("Informe o valor do salário: "); 
    scanf("%f", &salario); // Entrada de dados tipo float. Por causa que é dinheiro

    gerente=strcmp(cargo, "gerente"); // essa função retorna valores inteiro 0 se os dois parametros forem iguais. òtimo para usar como sistemas de condições para dados tipo string
    engenheiro=strcmp(cargo, "engenheiro"); // esses retornos são alocados nas variaveis de tipo inteiro
    auxiliar=strcmp(cargo, "auxiliar");


    
  // variascondiçõs para encontrar a string digitada pelo usuario. a variavel que tiver será será a que o loop terá como condição verdadeira. 
    if( gerente == 0){
        novo_salario= salario+ (salario*0.1); // Depois irá executar as operações prevista no enunciado.
        diferenca= novo_salario-salario; // essa operacao é para saber o valor do aumento no salario
        printf("Novo salário: %.2f\n. O salário antigo de R$ %.2f teve aumento de R$ %.2f", novo_salario, salario, diferenca); 
    }else if(engenheiro == 0){
         novo_salario= salario+ (salario*0.2);
         diferenca= novo_salario-salario;
         printf("Novo salário: %.2f\n. O salário antigo de R$ %.2f teve aumento de R$ %.2f", novo_salario, salario, diferenca);
    }else if( auxiliar == 0){
        novo_salario= salario+ (salario*0.3);
        diferenca= novo_salario-salario;
        printf("Novo salário: %.2f\n. O salário antigo de R$ %.2f teve aumento de R$ %.2f", novo_salario, salario, diferenca);
    }else{
        novo_salario= salario+ (salario*0.4);
        diferenca= novo_salario-salario;
        printf("Novo salário: %.2f\n. O salário antigo de R$ %.2f teve aumento de R$ %.2f", novo_salario, salario, diferenca);
    }
    return 0;
    // final de programa
}