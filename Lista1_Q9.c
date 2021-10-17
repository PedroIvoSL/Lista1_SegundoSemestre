#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numeroMatricula[50], mesesTrabalhados[50], numeroEmpregados = 0, swap, swap2;
    do
    {
        printf("Digite o numero da matricula: ");
        scanf("%d", &numeroMatricula[numeroEmpregados]);
        for (int i = 0; i < numeroEmpregados; i++)
        {
            if (numeroMatricula[i] == numeroMatricula[numeroEmpregados])
            {
                printf("Numero da matricula existente!!!\n");
                printf("Digite o numero da matricula: ");
                scanf("%d", &numeroMatricula[numeroEmpregados]);
                i = 0;
            }
        }

        if (numeroMatricula[numeroEmpregados] != 0)
        {
            printf("Digite numero de meses trabalhados: ");
            scanf("%d", &mesesTrabalhados[numeroEmpregados]);
            for (int i = 0; i < numeroEmpregados; i++)
            {
                if (mesesTrabalhados[i] == mesesTrabalhados[numeroEmpregados])
                {
                    printf("Outro funcionario foi contratado neste mes!!!");
                    printf("Digite numero de meses trabalhados: ");
                    scanf("%d", &mesesTrabalhados[numeroEmpregados]);
                    i = 0;
                }
            }
        }
        else if (numeroEmpregados == 50)
        {
            printf("Numero maximo de cadastro atingido!\n");
            numeroMatricula[++numeroEmpregados] = 0;
        }
        else
        {
            printf("cadastros finalizados!\n");
        }
    } while (numeroMatricula[numeroEmpregados++] != 0);
    for (int i = 0; i < numeroEmpregados; i++)
    {
        for (int j = 0; j < numeroEmpregados; j++)
        {
            if (mesesTrabalhados[i] < mesesTrabalhados[j])
            {
                swap = mesesTrabalhados[i];
                mesesTrabalhados[i] = mesesTrabalhados[j];
                mesesTrabalhados[j] = swap;

                swap2 = numeroMatricula[i];
                numeroMatricula[i] = numeroMatricula[j];
                numeroMatricula[j] = swap2;
            }
        }
    }
    system("cls");
    for (int i = 0; i < 3; i++)
    {
        printf("A matricula do %d empregado: %d\n", i, numeroMatricula[i]);
        printf("esse funcionario trabalhou: %d meses\n", mesesTrabalhados[i]);
    }
}