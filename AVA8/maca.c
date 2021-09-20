#include <stdio.h>
#include <string.h>
#define MAX 101

int main(){

    char frase[MAX];
    char vogais[5][2];
    vogais[0][0] = 'a';
    vogais[0][1] = 'A';
    vogais[1][0] = 'e';
    vogais[1][1] = 'E';
    vogais[2][0] = 'i';
    vogais[2][1] = 'I';
    vogais[3][0] = 'o';
    vogais[3][1] = 'O';
    vogais[4][0] = 'u';
    vogais[4][1] = 'U';

    int i, tamanho=0, j, consoantes=0, count=0;

    gets(frase);

    tamanho = strlen(frase);

    for(i=0;i<tamanho;i++){
        for(j=0;j<5;j++){
            if(i == 0){
                if((frase[i] == vogais[j][0]) || (frase[i] == vogais[j][1])){
                    count++;
                }
            }
            if((frase[i] == ' ') && ((frase[i+1] == vogais[j][0]) || (frase[i+1] == vogais[j][1]))){
                    count=0;
                }
        }
        if((frase[i] == ' ') || (i == 0)){
            if (count == 0){
                consoantes++;
            }
        }
        count++;
    }
    printf("%d", consoantes);
    return 0;
}