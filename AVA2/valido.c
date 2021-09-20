#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    char num;

    int verificador(char idade[]){
        for(int i=0; i < strlen(idade); i++){
            if((idade[i] > '0' && idade[i] < '9')==0){
             return 0;
            }
       
        }
    return 1;
    }
   float analise(){
       float idade2=0;
       char idade[10];

       do{
           gets(idade);
           if (verificador(idade) == 0){
             printf("Número não é válido!Por favor, digite novamente:");
           }else{
               idade2= atoi(idade);
           }
        }while (idade2 == 0);
    return idade2;
       
   }
    printf("Digite um número:");
    num= analise();
  
}


