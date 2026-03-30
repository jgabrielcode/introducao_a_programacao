#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int numeroUsuario, numeroComputador, resultado;
    char opcao;
    srand(time(NULL));
    numeroComputador = (rand() % 100) + 1;
    printf("Menu de Opções: \n");
    printf("M - Maior\n");
    printf("N - Menor\n");
    printf("I - Igual\n");
    printf("Escolha seu palpite: ");
    scanf("%c", &opcao);

    switch (opcao){
        case 'M':
        case 'm':
        printf("Digite seu numero entre (1 a 100): ");
        scanf("%d", &numeroUsuario);
        resultado = numeroUsuario > numeroComputador ? 1 : 0;
        break;
        case 'N':
        case 'n':
        printf("Digite seu numero: ");
        scanf("%d", &numeroUsuario);
        resultado = numeroUsuario < numeroComputador ? 1 : 0;
        break;
        case 'I':
        case 'i':
        printf("Digite seu numero: ");
        scanf("%d", &numeroUsuario);
        resultado = numeroUsuario == numeroComputador ? 1 : 0;
        break;
        default:
        printf("Opção de jogo invalida");


    }

    if(resultado == 1){
        printf("Parabens, voce ganhou, numero: %d", numeroComputador);
    } else {
        printf("Infelizmnete voce perdeu, numero correto: %d", numeroComputador);
    }
    
}
