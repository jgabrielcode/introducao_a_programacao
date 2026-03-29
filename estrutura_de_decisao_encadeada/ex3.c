#include <stdio.h>

int main(){
    int idade, dependentes;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("digite a sua renda mensal: ");
    scanf("%f", &renda);
    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);

    if(idade >= 18 && idade < 65){
        if(renda < 3000 ){
            if(dependentes > 2){
                printf("Aprovado!");

            } else{
                printf("reprovado");
            }

        } else{
            printf("reprovado");
        }

    } else{
        printf("reprovado");
        }

}