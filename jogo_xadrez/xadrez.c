#include <stdio.h>

void movimentoTorre(int n){
    if(n > 0){
        printf("Cima \n");
        movimentoTorre(n - 1);
    }
    
    
}

void movimentoBispo(int n){
    if(n > 0){
        printf("Cima \n");
        printf("Direita \n");
       movimentoBispo(n - 1);
    }
}


void movimentoRainha(int n){
    if(n > 0){
        printf("Esquerda \n");
        movimentoRainha(n - 1);
    }
}


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
        i = 5;
        movimentoTorre(i);
        break;
    case 2:
        // i = 5;
        // movimentoBispo(i);
        for(i = 0; i < 5; i++){
            printf("Cima\n");
            for(j = 0; j < 1; j++){
                printf("Direita\n");    
            }
        }
    break;
    case 3:
        i = 8;
        movimentoRainha(i);
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