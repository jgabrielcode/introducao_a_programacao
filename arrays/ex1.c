#include <stdio.h>

void caracterList(){
    char letras[4] = {'A','B','C','D'};
    
     for(int i = 0; i < 4; i++){
        printf("%c \n", letras[i]);
     }
}

int main(){
    int v[3] = {10,20,30};

    printf("%d \n", v[2]);

    caracterList();
}