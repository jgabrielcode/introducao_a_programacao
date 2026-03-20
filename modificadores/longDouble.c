#include <stdio.h>

int main(){
    double n0 = 3.141592653589793 ;
    long double n1 = 3.141592653589793238463;
     printf("Numero preciso (double): %.15f\n", n0);
     printf("Numero muito preciso (long double): %.21lf\n", n1);

    return 0;
}