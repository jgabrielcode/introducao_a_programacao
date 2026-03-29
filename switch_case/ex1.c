#include <stdio.h>

int main(){
   int dia;

    printf("Digite o dia da semana: ");
    scanf("%d", &dia);

    switch (dia){
        case 1:
        printf("Segunda-Feira");
        break;
        case 2:
        printf("Terça-Feira");
        break;
        case 3:
        printf("Quarta-Feira");
        break;
        case 4:
        printf("Quinta-Feira");
        break;
        case 5:
        printf("Sexta-Feira");
        break;
        case 6:
        printf("Sabado");
        break;
        case 7:
        printf("Domingo");
        break;
    }
}