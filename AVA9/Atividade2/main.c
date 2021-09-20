/* ----------------------------------UNIFESP--------------------------------------
Disciplina: Linguagem de programacao, 1S, ID
Professor: Ezequiel R. Zorzal
Aluno: Ricardo Sousa de Paiva      
-------------------------------------Lista 9--------------------------------------
2. Escreva um programa que leia um arquivo texto e duas strings e um nome para um arquivo a ser criado
Todos os parâmetros devem ser passados como argumentos da função main(int argc, char *argv[])
O programa deve retornar uma mensagem ao usuário quando o nu ́mero de parâmetros for incompatível com o problema (arquivoIn, string1, string2 e arquivoOut)
Uma função deve buscar por ocorrências da string1 no arquivoIn, substituí-la pela string2 durante a geração do arquivoOut
Obs. a estética e a eficiência do código serão consideradas
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){// Função com parametros de entrada inteiro e ponteiro
    char strings[999], *arq; // string para alocação da mensagem recebida

    FILE *arquivoIN, *arquivoOUT; //Ponteiros que permitirar manipular arquivos de entradas e saída.
    arquivoIN= fopen(argv[1], "r"); //Função abre arquivo de entrada e saída para leitura. A primeira coisa a se fazer. a função fopen 
    arquivoOUT= fopen(argv[4], "w");//recebe dois parametros de entradas: uma string, contendo o nome do arquivo e o modo de abertura do arquivo. No caso "r", leitura e o arquivo já deve existir. Já no "w" é escrita. Ele cria o arquivo. Caso já exista, ele substitui o anterior   


    //Condições que irão verificar se as entradas estão conforme o esperado ou ocorreu algum tipo de erro (NULL) e imprimir as mensagens de erros:  
    if(arquivoIN == NULL){
        printf("Erro na abertura! O arquivo de entrada não existe.");
        system("pause");// Aguarda para executar a função exit que finaliza o app
        exit(1); //Retorna 1 no caso de erro
    }
    if(arquivoOUT == NULL){
        printf("Erro! Não foi possível criar o arquivo de saída!");
        system("pause");
        exit(1);
    }
    if(argc != 5){
        printf("Quantidade de parâmetros errada!");
        system("pause");
        exit(1);
    }

    fread(&strings, sizeof(char), 100, arquivoIN); //Função ler um broco de dados do arquivo. No caso, string. Recebe quatro parâmetro de entrada. 
    arq= strtok(strings, " ");// Essa função divide a string em substrings com base em um caracter, no caso o espaço.

    while(arq != NULL){ // Loop para percorrer toda a string
        if(strcmp(arq, argv[2])== 0){ // Primeira condição veridica se cada as substrings que estão em arq é igual a string recebida.
            fprintf(arquivoOUT, "%s", argv[3]); // Essa função irá escrever a troca da string existente pela nova
            fprintf(arquivoOUT, " ");// É necessário colocar espaço entre as strings.
        }else{ //Caso contrário
            fprintf(arquivoOUT, "%s", arq); // Será impresso a mesma string e colocado no arquivo de saída
            fprintf(arquivoOUT, " "); // Insere espaço
        }
        arq= strtok(NULL, " ");// No final da string recebe NULL e finaliza o loop
    }
    fclose(arquivoIN); //Função fecha o programa de entrada
    fclose(arquivoOUT); //Função fecha o programa de saída

    system("pause");
    return 0; // retorna 0 caso o programa funcionou conforme previsto
}