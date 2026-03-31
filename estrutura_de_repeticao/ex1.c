#include <stdio.h>

int main(){
    int num;

    do
    {
        printf("Digite um numero (Negativo para sair): ");
        scanf("%d", &num);

        if( num>=10){
            printf("Voce digitou %d\n", num);
        }


    } while (num >= 0);

    printf("Numero negativo detectado. saindo...\n");
    
}