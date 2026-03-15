#include <stdio.h>

int main(){
    int nota1 , nota2, nota3;
    float media;

    printf("Digite a primeira Nota: ");
    scanf("%d",&nota1);
    printf("Digite a segunda Nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira Nota:");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("A media do aluno é:  %.1f", media);

    return 0;
}