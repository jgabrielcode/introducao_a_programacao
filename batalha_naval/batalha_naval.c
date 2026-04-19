#include <stdio.h>

int main(){

    int i,j, n, escolha;

    #define LINHAS 10
    #define COLUNAS 10

    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    for(i = 0; i < 10; i++){
        printf("%c ", letras[i]);
    }
    printf("\n");

    //ATRIBUIR O VALOR DE 3 A CADA LOOP 0 - 0 1-1

    int navios[LINHAS][COLUNAS] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

            //navios horizontal

            for(n = 0; n < 3; n++) navios[0][5 + n] = 3;
            for(n = 0; n < 3; n++) navios[3][2 + n] = 3;
            for(n = 0; n < 3; n++) navios[9][7 + n] = 3;

            //navios vertical
            for(n = 0; n < 3; n++) navios[4 + n][7] = 3;
            for(n = 0; n < 3; n++) navios[2 + n][0] = 3;
            for(n = 0; n < 3; n++) navios[0 + n][9] = 3;

            //navios cone




    for(i = 0; i < 10; i++){
        printf("%d ", i + 1);

        for(j = 0; j < 10 ; j++){
                
        printf("%d ", navios[i][j]);

           
        }
        printf("\n");
    }

    printf("\n");


    printf("Escolha sua matriz de efeito especial\n");
    printf("1 - Cone\n");
    printf("2 - Cruz\n");
    printf("3 - Octaedro\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
        int cone[3][5] = {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
        
    };
        cone[0][2] = 5;

    for(n = 0 ; n < 3; n++) cone[1][1 + n] = 5;
    for(n = 0 ; n < 5; n++) cone[2][0 + n] = 5;

    for(i = 0; i < 3; i++){

        for(j = 0; j < 5 ; j++){

            printf("%d ", cone[i][j]);
           
        }
        printf("\n");
    }
    break;
    case 2:

    int cruz[3][5] = {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
        
    };

        cruz[0][2] = 1;
        cruz[2][2] = 1;

        for(n = 0 ; n < 5; n++) cruz[1][0 + n] = 1;
        
        for(i = 0; i < 3; i++){

        for(j = 0; j < 5 ; j++){

            printf("%d ", cruz[i][j]);
           
        }
        printf("\n");
    }

    break;
    case 3:
    int octaedro[3][5] = {
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    octaedro[0][2] = 2;
    octaedro[2][2] =  2;
    for(n = 0 ; n < 3; n++) octaedro[1][1 + n] = 2;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("%d", octaedro[i][j]);
        }
        printf("\n");
    }
    break;
     }

    
}