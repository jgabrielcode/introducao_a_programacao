#include <stdio.h>

int main(){

    char estado;
    char codigo[3];
    char cidade[50];
    float populacao;
    float area;
    float PIB;
    int pontosTuristicos;

    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado);

    printf("Digite um codigo de 01 a 04: ");
    scanf(" %s", &codigo);

    getchar(); // consome o '\n' deixado pelo scanf


    printf("Digite o nome da cidade: ");
    fgets(cidade,50, stdin);

    printf("Digite a populacao: ");
    scanf(" %f", &populacao);

    printf("Digite a area: ");
    scanf(" %f", &area);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB);

    printf("Digite a quantoidade de pontos turisticos: ");
    scanf(" %d", & pontosTuristicos);
    printf("\n");

    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n",estado, codigo);
    printf("Cidade: %s", cidade);
    printf("Populaçaõ: %.2f\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
    printf("\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estado);

    printf("Digite um codigo de 01 a 04: ");
    scanf(" %s", &codigo);

    getchar(); // consome o '\n' deixado pelo scanf

    printf("Digite o nome da cidade: ");
    fgets(cidade,50, stdin);

    printf("Digite a populacao: ");
    scanf(" %f", &populacao);

    printf("Digite a area: ");
    scanf(" %f", &area);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB);

    printf("Digite a quantoidade de pontos turisticos: ");
    scanf(" %d", & pontosTuristicos);
    
    printf("\n");

    printf("Carta 2");
    printf("\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n",estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populaçaõ: %.2f\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);



    return 0;
}
