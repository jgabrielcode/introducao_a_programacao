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
    printf("\n");
    printf("Carta 1\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo: %c%s\n",estadoCarta1, codigoCarta1);

    printf("Cidade: %s\n", cidadeCarta1);
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

    printf("Cidade: %s\n", cidadeCarta2);
    printf("Populaçaõ: %u\n", populacaoCarta2);
    printf("Area: %.2f\n", areaCarta2);
    printf("PIB: %.2f\n", PIBCarta2);
    printf("Pontos Turisticos: %d\n", pontosTuristicosCarta2);
    printf("Densidade Populacional: %f\n", densidadePopulacionalCarta2);
    printf("PIB per Capita: %f\n", PIBperCapitaCarta2);
    printf("Super poder: %.2f\n", superPoderCarta2);

    printf("\n");

    //Comparação das Cartas
    int escolha1, escolha2, valor1, valor2, resultado;

    printf("Comparacao de cartas:\n");
    printf("Escolha a primeira carta que deseja comparar\n");
    printf("1 - População \n");
    printf("2 - Area \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turisticos \n");
    printf("5 - Densidade Populacional \n");
    printf("6 - PIB per Capita \n");
    printf("7 - Super Poder \n");
    printf("Escolha 1: ");
    scanf("%d", &escolha1);

    switch (escolha1){
        case 1: 
        valor1 = populacaoCarta1 > populacaoCarta2 ?  1 : 0;
        break;
        case 2: 
        valor1 = areaCarta1 > areaCarta2 ? 1 : 0;
        break;
        case 3:
        valor1 = PIBCarta1 > PIBCarta2 ? 1 : 0;
        break;
        case 4:
        valor1 = pontosTuristicosCarta1 > pontosTuristicosCarta2 ? 1 : 0;
        break;
        case 5: 
        valor1 = densidadePopulacionalCarta1 < densidadePopulacionalCarta2 ? 1 : 0;
        break;
        case 6:
        valor1 = PIBperCapitaCarta1 > PIBperCapitaCarta2 ? 1 : 0;
        break;
        case 7:
        valor1 = superPoderCarta1 > superPoderCarta2 ? 1 : 0;
        break;
    }


    printf("Escolha a segunda carta que deseja comparar\n");
    printf("Escolha 2: ");
    scanf("%d", &escolha2);

    if(escolha1 == escolha2){
        printf("Essa opcao ja foi escolhida, informe outra carta para comparar\n");
            scanf("%d", &escolha2);
    }



    switch (escolha2){
        case 1: 
        valor2 = populacaoCarta1 > populacaoCarta2 ?  1 : 0;
        break;
        case 2: 
        valor2 = areaCarta1 > areaCarta2 ? 1 : 0;
        break;
        case 3:
        valor2 = PIBCarta1 > PIBCarta2 ? 1 : 0;
        break;
        case 4:
        valor2 = pontosTuristicosCarta1 > pontosTuristicosCarta2 ? 1 : 0;
        break;
        case 5: 
        valor2 = densidadePopulacionalCarta1 < densidadePopulacionalCarta2 ? 1 : 0;
        break;
        case 6:
        valor1 = PIBperCapitaCarta1 > PIBperCapitaCarta2 ? 1 : 0;
        break;
        case 7:
        valor1 = superPoderCarta1 > superPoderCarta2 ? 1 : 0;
        break;
    }

    resultado = valor1 + valor2;
    
    resultado >= 2 ? printf("Carta 1 Venceu") : printf("Carta 2 venceu");

    return  0;

    }



    // printf("Escolha a segunda carta que deseja comparar");
    // printf("1 - População \n");
    // printf("2 - Area \n");
    // printf("3 - PIB \n");
    // printf("4 - Pontos Turisticos \n");
    // printf("5 - Densidade Populacional \n");
    // printf("6 - PIB per Capita \n");
    // printf("7 - Super Poder \n");
    // printf("Escolha 2: ");
    // scanf("%d", &escolha2);

    

    



