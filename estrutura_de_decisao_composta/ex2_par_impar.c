#include <stdio.h>

int main(){
    int numero;
    numero = 12;

    if(numero % 2 == 0){
        printf("%d e par", numero);
    } else {
        printf("%d e impar", numero);
    }
}