#include <stdio.h>

void recursivaLoop(int n){

    if(n > 0){
        printf("%d ",n);
        recursivaLoop(n - 1);
    }
}

int main(){
    int numero = 5;
    printf("CONTAGEM REGRESSIVA");
    recursivaLoop(numero);
    return 0;
}