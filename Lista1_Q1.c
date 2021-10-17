#include <stdio.h>

int main()
{
    int notas[30];

    for (int i = 1; i <= 30; i++)
    {
        printf("Digite a nota do aluno de numero %d: ", i);
        scanf("%d", &notas[i]);
    }

    for (int i = 1; i <= 30; i++)
    {
        printf("A nota do aluno %d foi: %d\n", i, notas[i]);
    }
    return 0;
}