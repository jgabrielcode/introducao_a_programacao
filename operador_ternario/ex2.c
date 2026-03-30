#include <stdio.h>

int main (){
    int opcao;

    float nota1, nota2 , media;

    printf("Menu de gerenciamento de estudantes\n");
    printf("1. Calcular Media\n");// calcular media
    printf("2. Determinar Status\n");//aprovado recuperacao
    printf("3. Sair\n");
    printf("Escolher opção: ");
    scanf("%d", &opcao);

    switch (opcao) 
    {
        case 1:
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        if((nota1 > 0 && nota1 < 10) && (nota2 > 0 && nota2 < 10)){
            printf("Dados inseridos corretamente\n");
            media = (nota1 + nota2) / 2;
            printf("Sua media foi %.2f", media);
        } else {
            printf("Insira os dados corretamente");
        }

        break;
        case 2 :
        printf("Digite a media: ");
        scanf("%f", &media);

        media > 5 ? printf("Aprovado") : printf("Reprovado");

    }
    
}