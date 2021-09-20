/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lab 6--------------------------------------
1- Fazer um programa usando uma função recursiva para resolver o problema da Torre de
Hanói usando N discos. N deverá ser informado pelo usuário. O programa deverá informar
os passos necessários para resolução do problema.
*/
#include <stdio.h>
#include<math.h>

void torreHanoi(int, char,char,char); // prótotipo das duas funções chamadas dentro de main
int quantidade(int);

main(){
	int n;
 
	printf("Por favor, digite o número de discos: "); // Saida de dados para orientar usuário
	scanf("%d",&n); // Entrada de dados. O usuário vai digitar o valor d "n" conforme previsto no enunciado

	printf("\nPassos para conseguir resolver a Torre de Hanói:\n"); // Saída de dados para orientar o usuario
	torreHanoi(n,'A','C','B'); // Chamada da função que irá resolver o problema de forma recursiva (n-1)

	printf("\n"); // Quebra de linha

    quantidade(n);// Chamada da função para calcular o valor total de passos que será realizado. Não conseguir fazer tudo numa função, pois exigia ponteiros. 
	return 0; // ...e não tive sucesso nos testes com ponteiros, por isso existe outra função.
    // Fim de programa
}
void torreHanoi(int n,char comeco,char chegada,char auxiliar){ // A função tem como paramentos de valor com tipos inteiros e char
 
	//Nessa condição, se sobrar apenas o disco 1 vai mover e retornar*/
	if(n == 1){ 
		printf("\nMova o disco 1 de %c para  %c",comeco ,chegada);
		return;
	}else{

    // Essa parte basicamente, é uma função que chama a si mesma. Isso possibilita dividir o problema "n" discos em partes menores 2^n-1. Até quando chegar no problema original que é "n".
	torreHanoi(n-1,comeco,auxiliar,chegada);// Essa função move todos os dicos para c, tendo como meio o auxiliar
	
	printf("\nMova o disco %d de %c para %c", n,comeco,chegada);
	
	torreHanoi(n-1,auxiliar,chegada,comeco);//Já essa, move os discos de B para C, usando o A como auxiliar. 
    }
}
int quantidade(int n){ // função de tipo inteira com paramentos de valor
   
    n=pow(2,n)-1; // para calcular o valor dos movimentos necessário. Usei basicamente a formula de solução recursiva 
    return printf("\nSão necessário, no mínimo, %d movimentos para concluir o jogo!", n); // A função retorna o valor n + mensagem. 
}