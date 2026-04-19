//procurar numero na matriz caso ache exibe mensagem , se nao continua procurando
#include <stdio.h>

int main(){

    int found = 0;
    int target = 10;

    #define TAM 3

    int matriz[TAM][TAM] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(matriz[i][j] == target){
                printf("Numero encontrado: %d na posicao %d , %d", target, i ,j);
                found = 1;
                break;
            }

        }
        if (found) break;
        
    }
    
        if (!found) printf("Numero nao encontrado");

    return 0;
}