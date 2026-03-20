#include <stdio.h>

int main (){
    int numeroNormal = 2147483647;
    long long int numeroGrande = 2147483647;

    printf("Numero regular (int): %d\n", numeroNormal);
    printf("Numero Grande (long int): %lld\n", numeroGrande);

    numeroGrande = 2147483648;
    printf("Numero Grande atualizado (long int): %lld\n", numeroGrande);

    int i;
    long int num;
    long long int numG = 2147483647;


    printf("Size of int: %zu bytes\n", sizeof(i));
    printf("Size of long long int: %lld bytes\n", sizeof(numG));
    printf("Size of long int: %ld bytes\n", sizeof(num));

    return 0;
}