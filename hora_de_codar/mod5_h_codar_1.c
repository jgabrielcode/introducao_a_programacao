#include <stdio.h>

int main (){

    int index;

    char * nomesAlunos[3][3] = {
        {"Aluno 1", "Pt: 30", "Mat: 90"},
        {"Aluno 2", "Pt: 60", "Mat: 60"},
        {"Aluno 3", "Pt: 90", "Mat: 90"}
        
    };

    printf("Escolha o aluno que deseja ver as notas\n");
    printf("0- Aluno 1\n");
    printf("1- Aluno 2\n");
    printf("2- Aluno 3\n");
    printf("EScolha: ");
    scanf("%d", &index);

    printf("As notas do %s são:  %s , %s", nomesAlunos[index][0],nomesAlunos[index][1],nomesAlunos[index][2]);

      return 0;
}