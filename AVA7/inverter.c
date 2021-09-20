/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 7--------------------------------------
1- Dado um vetor de tamanho t, faça uma função que inverta os valores do mesmo. void inverte(int *v, int t)
*/
#include<stdio.h>
#include<stdlib.h>

void inverte(int *v, int t); // Protótipo da função

int main(void){

    int vetor[100]; //Vetor com quantidade 100
    int i,t,u;

    printf("Qual o tamanho do vetor?");//Saída para orientar usuario
    scanf("%d", &t);// Entrada de dados e alocada no endereço da memoria de t

    printf("\nDigite %d numeros: \n", t);
    
    for(i=0;i<t;i++){ //Loop para colocar os valores dentro do vetor
        scanf("%d", &vetor[i]); // O loop possibilitar percorrer todos os locais do vetor
    }
    u= t-1;// Coloquei essa variveal, pois o valor de limite do loop presente na funcao inverte deve ser sempre n-1 
    inverte(vetor,u); //Chamada da funcao inverte. Ela é responsável por inverter a ordem dos valores inseridos na entrada

    return 0; // Finalização do programa
}
void inverte(int *v,int t){  //Funcao com parametros de referencia "*v" e de valores "t"
    
    for(int i=t;i>=0;i--){ //O loop irá percorrer o vetor em ordem oposta do loop que inseriu os valores na entrada.Ele irá acessa o loop pela ultima casa. E decrescendo até a primeira.
        printf("%d ", v[i]);// E com isso o loop passa pelo vetor imprimindo os valores.  Como "*v" aponta os endereções de memoria do vetor "i". Dessa forma, são copiados os endereços de memoria do vetor presente na função main para a função inverte. Sem haver perda do valor como ocorrer normalmente na mudança de uma função para outra.  
    }    
}