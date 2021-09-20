/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lab 3--------------------------------------
2-COVID-19: Programa que estima quantos alunos podem ficar dentro de uma sala de
aula. Para evitar o contato, é preciso respeitar distância mínima entre as cadeiras,
de 1,0m a 1,5 m. Neste cenário, é necessário garantir pelo menos 2,25m² por aluno.
O usuário deve informar a largura e comprimento do local. Considere a área
retangular.*/

#include<stdio.h>
#include<math.h>

main(){
    
    float width, lenght, area;
    int students; // Declaração de variaveis
    
    printf("Por favor,informe a largura:\n"); // Saidas de dados para usuario visualizar
    scanf("%f",&width); // Entrada de dados

    printf("Por favor, informe o valor do comprimento:\n");
    scanf("%f", &lenght);

    area= width*lenght; // operação para saber a area
    students= area/2.25; //operação para calcular a media de aluno pela area informada.

// Saída de dados
    printf("********** Atenção! **********\n Na área de %.2f metros² podem ficar apenas %d alun@(s) dentro da sala de aula!\n", area, students);


    return 0;
    //Finaliza programa
}