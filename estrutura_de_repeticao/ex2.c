#include <stdio.h>
 
int main (){
    int opcao;
do
{
    printf("Escolha a opcao: \n");
    scanf("%d", &opcao);
    switch (opcao)
    {
        case 1:
        printf("Opcao 1\n");
        break;
        case 2:
        printf("Opcao 2\n");
        break;
        case 3:
        printf("Saindo...");
        break;
    }
} while (opcao != 3);

    
}