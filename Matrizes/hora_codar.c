#include <stdio.h>

int main () {
    int index;

    char * nomeAlunos[3][3] = {
        {"Aluno 0", "pt: 60", "mat: 90"},
        {"Aluno 1", "pt: 70", "mat: 80"},
        {"Aluno 2", "pt: 100", "mat: 50"}
    };

    printf("Digiteo o número do aluno que queira ver as notas: \n");
    printf("Para o aluno 0, digite 0\n");
    printf("Para o aluno 1, digite 1\n");
    printf("Para o aluno 2, digite 2\n");
    scanf("%d", &index);

    printf("A nota do %s são: %s , %s\n", nomeAlunos[index][0], nomeAlunos[index][1], nomeAlunos[index][2]);
}