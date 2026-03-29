#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));//define a semente
    printf("%d\n", rand() % 10 + 1);
    printf("%d\n", rand() % 10 + 1);
    printf("%d\n", rand() % 10 + 1);
}