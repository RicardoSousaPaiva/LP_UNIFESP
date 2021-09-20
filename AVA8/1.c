/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva       
-------------------------------------Lista 8--------------------------------------
1.Escreva uma função que receba dois registros do tipo data, cada um representando uma data válida, e devolva o
número de dias que decorreram entre as duas datas.
*/

#include <stdio.h>
#include <stdlib.h>

struct data{ // Struct conforme solicita o enunciado, com variaveis tipo data.
    int dia;
    int mes;
    int ano;
};
//Protótipo das funções
int anoBissexto(int);

int dataCorreta(struct data);

int numeroDeDias(struct data);

int main(){

    struct data primeiro,segundo; // Duas variaveis de tipo data para pode usar a struct data
    int dias; // variavel que irá receber valor total dos dias

    printf("Digite a primeira data (dd mm aaaa): "); // Saidas de dados para orientar o usuario
    scanf("%d %d %d", &primeiro.dia, &primeiro.mes, &primeiro.ano); // Entrada de dados alocando os valores nos locais da struct

    printf("Digite a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &segundo.dia, &segundo.mes, &segundo.ano);  //

    if(!dataCorreta(primeiro) || !dataCorreta(segundo)){ // Condição que verifica mediante a função data se as entradas dos dados correspondem a uma data válida
        printf("Data errada!\n"); // Caso seja verdadeira a condição. Será impresso essa mensagem
    }
    dias= numeroDeDias(segundo) - numeroDeDias(primeiro); // Variavel "dias" irá receber a diferença das somas dos dias que ocorreu na função "numeroDeDias". Será feito na seguinte ordem: segunda data - primeira data. 
    //Saida de dados
    printf("O intervalo de %d/%d/%d à %d/%d/%d equivale a %d dia(s)!\n ",primeiro.dia, primeiro.mes, primeiro.ano, segundo.dia, segundo.mes,segundo.ano,dias);
    //Final do programa
    return 0;
}
int anoBissexto(int ano){ // Função com parametro inteiro. Mediante as condições irá verificar se o ano digitado é bissexto

    if(ano%400 == 0){ 
        return 1;
    }
    if(ano%4 == 0 && ano%100 != 0 ){
        return 1;
    }
    return 0;
    //Caso seja bissexto irá retorna 1
}
int diasDomes[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; // Vetor com a quantidade de dias de cada mês de um ano não bissexto. É necessário a quantidade de cada mes para ser realizado as somas dos dias na função "numeroDeDias".

int dataCorreta(struct data d){ //Função recebe valor de tipo struct data. Irá verificar se os valores inseridos são validos para formar uma data válida.
    if(d.dia < 1 || d.dia > diasDomes[d.mes]){
        return 0;
    }
    
    if(d.mes < 1 || d.mes > 12){
        return 0;
    }
    return 1;
    // Caso seja falso nas duas condiçõs. O que significa que a data é valida. O retorno será 1.
}
int numeroDeDias(struct data d){ // Função recebe parametro de tipo struct data
    int resultado= 0;
    int i;
    //Será somado os dias equivalentes ao ano. Nessa primeira condição, são acrescidos dias de acordo com o ano (bissexto ou não)
    for(i=1; i < d.ano; i++){ // O loop tem como limite o  valor dentro da ano
        if(anoBissexto(i)){
            resultado += 366; // Será retornado a variavel resultado com o valor total da soma adquirida durante o loop.
        }else{
            resultado += 365;
        }
    }
    for(i=1; i < d.mes; i++){ // Loop para somar os dias dentro da varivel mes

        resultado += diasDomes[i]; // A soma será alocada na variavel resultado. Será percorrido o vetor "diasDomes" que contém as quantidades de dias de cada mes do ano. Dessa forma, fica bem mais facil soma a quantidade de dias de cada mes

        if(anoBissexto(d.ano) && i == 2){ // Se o ano for bissexto, será acrescido mais um valor na contagem
            resultado++;
        }
    }
    resultado += d.dia; // o valor da variavel dias é apenas somado na variavel resultado.
    return resultado; // A função retorna a  variavel resultado que contém o valor total das somas realizadas do ano, mes e dia
}