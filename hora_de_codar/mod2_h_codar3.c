#include <stdio.h>

int main (){
    int i, numero;

    printf("Digite um numero para calcularmos a tabuada: ");
    scanf("%d", &numero);

    for(i = 0; i <= 10; i++){
        printf("%d x %d = %d \n", i,numero, i * numero);
    }
}