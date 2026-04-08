#include <stdio.h>

int main(){

    int matriz[3][3] = {

        {1,2,3},
        {4,5,6},
        {7,8,9}

    };

    for(int i = 0, j = 0; i < 2; i++, j++){
        printf("%d\n", matriz[i][j]);
    }

    return 0;
}