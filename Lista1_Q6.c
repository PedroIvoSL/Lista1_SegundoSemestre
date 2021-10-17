#include <stdio.h>
#include <stdlib.h>

int main()
{
    int funcionario[100], lower = 1100, upper = 10000, count, swap;

    do{
        printf("Digite a quantidade de funcionarios que tem na empresa:");
        scanf("%d", &count);
    }while (count > 101);
    srand(time(0));
    for (int x = 0; x <= count; x++)
    {
        funcionario[x] = (rand() % (upper - lower + 1)) + lower;
    }

    for (int c = 0; c < count - 1; c++)
    {
        for (int d = 0; d < count - c - 1; d++)
        {
            if (funcionario[d] < funcionario[d + 1])
            {
                swap = funcionario[d];
                funcionario[d] = funcionario[d + 1];
                funcionario[d + 1] = swap;
            }
        }
    }

    for (int t = 0; t < count; t++)
    {
        printf("O salario e de:%dR$\n", funcionario[t]);
    }
}