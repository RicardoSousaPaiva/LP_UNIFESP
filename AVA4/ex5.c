/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 4--------------------------------------
5- Escreva um algoritmo que implemente o jogo da velha utilizando uma matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ){
	int i, j, linha, coluna, count; // Atribuição das variaveis contadores
	char matriz[3][3]; // Matriz onde irá acontecer a alocação dos dados. E será referencia para os limites do tabuleiro. Linha:3 coluna:3 
	
	printf("\n");
	printf("********** JOGO DA VELHA **********");
	printf("\n");
	for(i = 0; i < 3; i++){ // Dois loop que irá imprimir o tabuleiro para o usuario visualizar e ver os locais da matriz
		putchar('\n'); // função com saída de dados 
		for(j = 0; j < 3; j++){ // 
			putchar('\t');
			matriz[i][j] = '*';
			printf("%c", matriz[i][j]);
		}
		printf("\n\n");
	}
	printf("*************************************");
	//primeiro jogador sempre será 'x' e o segundo sempre será 'O';
	for (count = 0; count < 9; count++){ // o limite do loop será 9, pois são possíveis apenas 9 jogadas. 3x3
		
				
		printf("\nInsira o número da linha para colocar o simbolo:\n-------------------------------------------------=");
		scanf("%d", &linha); // Dados de entrada para defifir o valor da linha
		fflush(stdout); // Essa função limpa o lixo de memoria que tiver
		linha--; // A linha será decrementada em cada loop para pode ocorrer o valor certo de colocações no tabuleiro
		
		printf("Insira o número da coluna para colocar o símbolo:\n-------------------------------------------------=");
		scanf("%d", &coluna); // entrada de dados para saber o valor da coluna
		fflush(stdout);
		coluna--;
		
		putchar('\n'); // saida de dados. Quebra de linha
		if(matriz[linha][coluna] == '*'){ // condição de entrada tem referencia os pontos dos tabuleiros. pois são nesses locais que serão alocados o char 0 ou x
		
			if(count%2){ // Este modulo define a alocação dos simbolos de cada jogado. Caso seja verdadeiro= 1. Local da matroz irá receber 0
				matriz[linha][coluna] = 'O';
			} 
else{
				matriz[linha][coluna] = 'X'; // Se for falso, reveberá X
			}
			for(i = 0; i < 3; i++){ //Os valores são distribuidos na matriz conforme o caminha dos loops da linha e coluna
				putchar('\n');
				for(j = 0; j < 3; j++){
					putchar('\t');
					printf("%c", matriz[i][j]); // Saida da matriz
				}
				printf("\n\n"); // Necessário quebra de linha para haver existencia das colunas
			} // no if é possível verificar as condiçoes para que ocorrar a vitoria de um jogador.
			if((matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] && matriz[0][0] != '*')||
			   (matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] && matriz[0][0] != '*')||
			   (matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] && matriz[0][0] != '*')||
			   (matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] && matriz[0][1] != '*')||
			   (matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] && matriz[0][2] != '*')||
			   (matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] && matriz[1][0] != '*')||
			   (matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] && matriz[2][0] != '*')||
			   (matriz[2][0] == matriz[1][1] && matriz[2][0] == matriz[0][2] && matriz[2][0] != '*')){
					
				printf("\nParabéns!\n O jogador %d ganhou a partida!", (count%2) + 1); // É colocado +1, pois como já visto o retorno será 0 ou 1. Caso seja o 0, torna-se o jogador 1 e o retorno 1 torna-se jogador 2.	
				return 0; // E é finalizado o programa						
			}
		}
		else{ // Se a condição do primeiro inf for falsa para *. Sigifica que o espaço já está preenchido. Então,
			printf("\nEsse espaço está preenchido. Tente outro lugar!\n"); //Será impresso essa mensagem de saída para orientar o usuario
			count--; //e decremento a variavel
		}
	}
	
	printf("\nNessa partida, não teve ganhador");//Se count chegar ao valor limite e não ter sastisfesto nenhuma condição verdadeira do if das vitorias. Será impresso essa mensagem.
	return 0;// E finalizado o programa.
}