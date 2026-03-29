#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//joken po escolha pedra papel tesoura

int main () {

    int opcao,jogada, jogadaComputador;
;

    printf("Modelo de Jogo\n");
    printf("1 - Iniciar \n");
    printf("2 - Regras Do Jogo \n");
    printf("3 - Sair \n");
    printf("Escolha a opcao de jogo: ");
    scanf("%d", &opcao);

    srand(time(NULL));
    jogadaComputador = (rand() % 3) + 1;
     
    switch (opcao) {
        case 1:
    
        printf("Escolha a sua Jogada: \n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        printf("Jogada: ");
        scanf("%d", &jogada);

        

        if(jogada == jogadaComputador){
            printf("Empate");
        } else if(jogada == 1 && jogadaComputador == 3 || 
            jogada == 2 && jogadaComputador == 1 || 
            jogada == 3 && jogadaComputador == 2
        ){  
            printf("Parabens, você Venceu!");
        } else{
            printf("Infelizmente você Perdeu!");
        }
        break;
        case 2:
        printf("Regras\n");
        printf("Pedra ganha de tesoura\n");
        printf("Papel ganha de pedra\n");
        printf("Tesoura ganha de papel\n");
        break;
        case 3:
        printf("Saindo do Jogo");
        break;
        default:
        printf("Escolha uma opçao valida");

    }
}