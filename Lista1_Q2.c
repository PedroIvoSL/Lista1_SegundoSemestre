#include <stdio.h>

int main()
{
    int alunos, nota[50];

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    for (int i = 1; i <= alunos; i++)
    {
        printf("Digite a nota do aluno de numero %d: ", i);
        scanf("%d", &nota[i]);
    }

    for (int i = 1; i <= alunos; i++)
    {
        printf("A nota do aluno %d foi: %d\n", i, nota[i]);
    }
    return 0;
}