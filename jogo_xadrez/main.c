#include <stdio.h>

int main (){
    int pecas;

    printf("Lista de peças\n");
    printf("1-Torre (5 casas na diagonal para cima e direita)\n");
    printf("2-Bispo (5 casas para a direita)\n");
    printf("3-Rainha (8 casas para a esquerda) \n");
    printf("Selecione a peça que quer movimentar: ");
    scanf(" %d", &pecas);

    switch (pecas)
    {
    case 1:
        for(int i = 0; i <= 5; i++){
        printf("Direita\n");
        }
        break;
    case 2:
    for(int i = 0; i <= 5; i++){
        printf("Cima, Direita\n");

    }
    break;
    case 3:
    for(int i = 0; i <= 8; i++){
        printf("Esquerda\n");

    }
    break;
    default:
        break;
    }

}
 //printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");, printf("Cima Esquerda\n"); printf("Direita\n");