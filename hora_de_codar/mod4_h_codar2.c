#include <stdio.h>

int main (){
    int numero = 0;

    do
    {
        printf("difite um numero par sair do programa");
        scanf("%d", &numero);

        if(numero % 2 == 0)
        {
            printf("%d e par\n", numero);
        } else
        {
            printf("%d e par",numero);
        }
    } while (numero % 2 != 0);
    

    return 0;
}