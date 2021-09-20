/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 4--------------------------------------
1- Dados dois vetores v1 e v2, ambos com 5 elementos, determinar o produto escalar
destes vetores..
*/

#include<stdio.h>
#include<math.h>  

int main(){

    int vector1[5], vector2[5],multiplication[5]; // Atribuição de vetores com tamanho máximo 5
    int i,j,count,produtoEscalar; // Atribuição das variaveis necessárias.


    count= 0;
    printf("Por favor, digite 5 valores para o vetor u:\n"); // Saída para orientar o usuario
   for(i=0; i < 5; i++){ // Primeiro Loop para preencher o primeiro vetor
       scanf("%d", &count);// Função para receber valores e depositar na variavel count
       vector1[i]= count;  //Os valores serão alocados nos endereços do vetor na proporção que i é atualizado
   }
   count=0;
   printf("Por favor, digite mais 5 valores para o vetor v\n");
   for(i=0; i<5; i++){ // o mesmo  procedimento para preenchimento do segundo vetor
       scanf("%d", &count);
       vector2[i]=count;   
   }
   
   for ( i = 0; i < 5; i++){ // Loop para realizar a operação que calcula o produto escalar
       multiplication[i]= vector1[i]*vector2[i]; //A multiplicação dos dados contidos nos vetores serão amarzenados em outro vetor
       produtoEscalar= produtoEscalar + multiplication[i];// O resultados das multiplicações seão somadas entre si, conforme prever a formula do produto escalar
   }
   
    printf("O produto escalar dos vetores u e v é: %d ",produtoEscalar); // Saída com o resultado do produto escalar
  
    return 0;   
    //Final do programa   
}
