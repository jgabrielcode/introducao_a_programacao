#include <stdio.h>

void imprimirMensagem(){
    printf("Mensagem impressa");
}
//estrutura encadeada
void calcularNota(){
    int nota;
    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    if(nota >= 7){
        printf("Aluno aprovado");
    } else if (nota >= 5){
        printf("Aluno de recuperação");
    } else {
        printf("Aluno reprovado");
    }
}

//estrutura aninhada 
void validarDisponibilidade(){
    int temCarteira, idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Possui CNH?\n");
    printf("Digite 1 - para sim e 0 para não ");
    scanf("%d", &temCarteira);

    if(idade >= 18){
        if(!temCarteira){
           printf("Não liberado"); 
        } else{
            printf("Liberado para Dirigir");
        }
    }else {
        printf("Não liberado");
    }


}

int main(){
//   calcularNota();
validarDisponibilidade();
}