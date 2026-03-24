#include <stdio.h>

int main(){
    //Se a 'idade' for 18 ou mais , o programa imprime 'voce e maior de idade' 
    int idade = 16;

    if(idade >= 18){
        printf("Você é maior de idade\n");
        printf("Dentro IF\n");
    }

    printf("Fora IF");
}