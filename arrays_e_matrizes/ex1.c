#include <stdio.h>

int main(){

    float notas[3] = {85.5,90.0,78.3};


    for(int i = 0; i <= 2 ; i++){
        
        printf("%.1f\n", notas[i]);

    }


    return 0;
}