#include <stdio.h>

int main(){

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;


    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &numero2);

    //operção soma
    soma = numero1 + numero2;

    //operção subtraçaõ
    subtracao = numero1 - numero2;

    multiplicacao = numero1 * numero2;

    divisao = numero1 / numero2;

    printf("A Soma é: %d\n", soma);
    printf("A Subtração é: %d\n", subtracao);
    printf("A Multiplicação é: %d\n", multiplicacao);
    printf("A Divisão é: %d\n", divisao);

}