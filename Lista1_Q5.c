#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[80], lower = 0, upper = 10, count = 80, search, amt_rep = 0, vector_position[80], t = 0;
    srand(time(0));
    for (int x = 0; x < count; x++)
    {
        vetor[x] = (rand() % (upper - lower + 1)) + lower;
    }
    system("cls");
    printf("Digite o numero que deseja busca: ");
    scanf("%d", &search);
    for (int i = 0; i < count; i++)
    {
        if (vetor[i] == search)
        {
            amt_rep++;
            vector_position[t++] = i;
        }
    }
    system("cls");
    printf("O numero pesquisado: %d\n", search);
    printf("vezes que o numero se repetido: %d\n", amt_rep);
    for (int t = 0; t < amt_rep; t++)
    {
        printf("O vector que o numero foi repetido: %d\n", vector_position[t]);
    }
    return 0;
}