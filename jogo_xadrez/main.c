#include <stdio.h>

int main (){
    int pecas;
    int i,j;

    printf("Lista de peças\n");
    printf("1-Torre (5 casas na diagonal para cima e direita)\n");
    printf("2-Bispo (5 casas para a direita)\n");
    printf("3-Rainha (8 casas para a esquerda) \n");
    printf("4-Cavalo (5 casas em L)\n");
    printf("Selecione a peça que quer movimentar: ");
    scanf(" %d", &pecas);

    switch (pecas)
    {
    case 1:
        for( i = 0; i <= 5; i++){
        printf("Cima Direita ");
        }
        break;
    case 2:
        for(i = 0; i <= 5; i++){
            
        printf("Direita");
        

    }
    break;
    case 3:
        for( i = 0; i <= 8; i++){
        printf("Esquerda\n");

    }
    break;
    case 4:
        i = 0;
        while(i <= 2){

            printf("Cima \n");

            if(i == 2)
            {      
                for(j = 0; j <= 1; j++){
                    printf("Direita ");
                }
            }
            i++;
        }
        break;

    default:
        break;
    }

}