#include <stdio.h>

int main(){
    //quesitos de seguranca
    float temperatura, umidade; 
    unsigned int nivelDeEstoque;

    printf("Entre com os dados\n");
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    printf("Digite a umidade: ");
    scanf("%f", &umidade);
    printf("Digite o nivel de estoque: ");
    scanf("%u", &nivelDeEstoque);

    if(temperatura < 30.0 || umidade < 20 || nivelDeEstoque < 5){
        printf("Alerta de seguranca");
    } else {
        printf("Esta tudo seguro");
    }

}