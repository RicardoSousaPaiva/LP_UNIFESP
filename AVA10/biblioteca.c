
#include "biblioteca.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h> 

  void trocar(){

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

  }

 void aumentoSalario(){

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
   
 }
void crnome(){

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
        printf("A frase modificada é: %s", chrNome); 
}
void retornString(){ 

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
}
void inverte (int *m, int n){
  for (n=n-1;n>=0;n--){
    printf ("\n %d",m[n]);
  }
  }


void inverter() {
  int num, i;
  scanf ("%d",&num);
  int m[num];
  for (i=0;i<num;i++){
    printf ("\n Digite o numero dado a m[%d]",i);
    scanf ("%d", &m[i]);
  }
  inverte (m,num);
 
}

void funcao_hanoi(int num, char inicial, char auxiliar, char final){     
if(num==1){
printf("\nMova o disco %d, do Pino %c para o Pino %c\n", num, inicial, final);    
}else{
funcao_hanoi(num-1, inicial, final, auxiliar);   
printf("\nMova o disco %d, do Pino %c para o Pino %c\n", num, inicial, final);
funcao_hanoi(num-1, auxiliar, inicial, final);
}
}
void torre(){
int discos, movimentos;
printf("\nDigite com quantos discos você irá jogar: ");
scanf("%d", &discos);  
funcao_hanoi(discos, 'A', 'B', 'C'); 
movimentos = pow(2, discos) - 1;   
printf("\nO número mínimo de movimentos que você terá de usar são: %d movimentos", movimentos);
}
