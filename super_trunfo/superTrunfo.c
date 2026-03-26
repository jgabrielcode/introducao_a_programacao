#include <stdio.h>
#include <string.h>

int main(){

    //Variaveis Carta1 & Carta 2

    char estadoCarta1 , estadoCarta2;
    char codigoCarta1[4], codigoCarta2[4];
    char cidadeCarta1[50], cidadeCarta2[50];
    unsigned long int populacaoCarta1, populacaoCarta2;
    float areaCarta1, areaCarta2;
    float PIBCarta1, PIBCarta2;
    int pontosTuristicosCarta1, pontosTuristicosCarta2;

    //Entrada dos Dados Carta 1

    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estadoCarta1);

    printf("Digite um codigo de 01 a 04: ");
    scanf(" %s", &codigoCarta1);

    getchar(); // consome o '\n' deixado pelo scanf


    printf("Digite o nome da cidade: ");
    fgets(cidadeCarta1,50, stdin);
    cidadeCarta1[strcspn(cidadeCarta1, "\n")] = '\0';

    printf("Digite a populacao: ");
    scanf(" %u", &populacaoCarta1);

    printf("Digite a area: ");
    scanf(" %f", &areaCarta1);

    printf("Digite o PIB: ");
    scanf(" %f", &PIBCarta1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", & pontosTuristicosCarta1);
    printf("\n");

    //Processamento dos dados Carta 1

    double densidadePopulacionalCarta1 = (double)populacaoCarta1 / areaCarta1;
    double PIBperCapitaCarta1 = (double)PIBCarta1 / populacaoCarta1;
    float superPoderCarta1 = populacaoCarta1 + areaCarta1 + PIBCarta1 + pontosTuristicosCarta1 + PIBperCapitaCarta1 + densidadePopulacionalCarta1;

    //Entrada de dados Carta 2 

    printf("Insira os dados da carta 2\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf(" %c", &estadoCarta2);

    printf("Digite um codigo de 01 a 04: ");
    scanf(" %s", &codigoCarta2);

    getchar(); // consome o '\n' deixado pelo scanf

    printf("Digite o nome da cidade: ");
    fgets(cidadeCarta2,50, stdin);

    printf("Digite a populacao: ");
    scanf(" %u", &populacaoCarta2);

    printf("Digite a area: ");
    scanf(" %f", &areaCarta2);

    printf("Digite o PIB: ");
    scanf(" %f", &PIBCarta2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", & pontosTuristicosCarta2);

    //Processamento dos dados Carta 2

    double densidadePopulacionalCarta2 = (double)populacaoCarta2 / areaCarta2;
    double PIBperCapitaCarta2 = (double)PIBCarta2 / populacaoCarta2;
    float superPoderCarta2 = populacaoCarta2 + areaCarta2 + PIBCarta2 + pontosTuristicosCarta2 + PIBperCapitaCarta2 + densidadePopulacionalCarta2;

    //Saida dos dados carta 1

    printf("Carta 1\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo: %c%s\n",estadoCarta1, codigoCarta1);

    printf("Cidade: %s", cidadeCarta1);
    printf("Populaçaõ: %u\n", populacaoCarta1);
    printf("Area: %.2f\n", areaCarta1);
    printf("PIB: %.2f\n", PIBCarta1);
    printf("Pontos Turisticos: %d\n", pontosTuristicosCarta1);
    printf("Densidade Populacional: %f\n", densidadePopulacionalCarta1);
    printf("PIB per Capita: %f\n", PIBperCapitaCarta1);
    printf("Super poder: %.2f\n", superPoderCarta1);

    printf("\n");

    //Saida dos dados carta 2

    printf("Carta 2");
    printf("\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Codigo: %c%s\n",estadoCarta2, codigoCarta2);

    printf("Cidade: %s", cidadeCarta2);
    printf("Populaçaõ: %u\n", populacaoCarta2);
    printf("Area: %.2f\n", areaCarta2);
    printf("PIB: %.2f\n", PIBCarta2);
    printf("Pontos Turisticos: %d\n", pontosTuristicosCarta2);
    printf("Densidade Populacional: %f\n", densidadePopulacionalCarta2);
    printf("PIB per Capita: %f\n", PIBperCapitaCarta2);
    printf("Super poder: %.2f\n", superPoderCarta2);

    printf("\n");

    //Comparação das Cartas

    printf("Comparacao de cartas:\n");
    printf("1 - Carta 1 venceu , 0 - Carta 2 venceu\n");

    if(populacaoCarta1 > populacaoCarta2){
        printf("Carta 1 (%s) venceu!\n", cidadeCarta1);
    }else{
        printf("Carta 2 (%s) venceu", cidadeCarta2);
    }

    printf("Area: (%d)\n", areaCarta1 > areaCarta2);
    printf("PIB: (%d)\n", PIBCarta1 > PIBCarta2);
    printf("Pontos Turisticos: (%d)\n", pontosTuristicosCarta1 > pontosTuristicosCarta2);
    printf("Densidade polulacional: (%d)\n", densidadePopulacionalCarta2 < densidadePopulacionalCarta1);
    printf("PIB per Capita: (%d)\n", PIBperCapitaCarta1 > PIBperCapitaCarta2);

    printf("Super Poder: Vencedor (%d)\n", superPoderCarta1 > superPoderCarta2);

    return 0;
}
