#include <stdio.h>
//calssificar se e adulto crianca , idoso

int main(){
    int idade;
    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    if(idade >= 60){
        printf("Voce e um Idoso");
    }else if (idade >= 18 && idade < 60){
        printf("Voce e um adulto");
    }else if (idade >= 12 && idade < 18){
        printf("Voce e um adolecente");
    }else{
        printf("Voce e uma criança");
    }
}