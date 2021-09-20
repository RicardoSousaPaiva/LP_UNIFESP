/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       RA= 159.214
-------------------------------------Lista 2--------------------------------------
8-Programa que calcule o peso ideal. Use operadores ternários para comparação. 
A fórmula para calcular o peso ideal é dada por: 

ph= (72.7*a)-58 pm= (62.1*a)-44,7
*/

#include <stdio.h>
#include <math.h>

int main(){ // Função principal

    char gender; // Declaração de variavel de tipo char
    float a, ph,pm; // Declaração de varivavel de tipo float


    printf("Qual o seu sexo (F ou M)? "); // Saida de dados para orientar usuario
    scanf("%c", &gender); // Entrada de dados 

    printf("Informe a sua altura: ");
    scanf("%f",&a);

    //Foi usado um operador tenário para identificar qual char que o usuario digitou. Cada condição tem uma formula própria que sera executada e impresso o valor.
    (gender) == 'F' ? printf("O seu peso ideal é %.2f kg\n ", ph= (72.7 *a)-58) : printf("O seu peso ideial é %.2fKg\n", pm=(62.1*a)-44.7);
    
    //Final de programa
    return 0;
}