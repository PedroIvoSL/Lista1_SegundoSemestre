#include <stdio.h>

int main()
{
    int idadePessoas[100], count, maiorIdade = 0, vectorPosition[100], repeat = 1;
    float mediaIdade = 0, somaIdade = 0;
    printf("Quantos vao ser cadastrado?: ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        printf("Digite a idade da pessoa de numero  %d: ", i);
        scanf("%d", &idadePessoas[i]);
    }
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            if (idadePessoas[i] > idadePessoas[j])
            {
                maiorIdade = idadePessoas[i];
            }
            else if (maiorIdade == idadePessoas[i])
            {
                repeat++;
            }
        }
    }
    for (int i = 1, t = 1; i < count; i++)
    {
        if (maiorIdade == idadePessoas[i])
        {
            vectorPosition[t++] = i;
        }
    }

    for (int i = 1; i <= count; i++)
    {
        somaIdade += idadePessoas[i];
    }
    mediaIdade = somaIdade / count;
    printf("A media da idade: %.2f\n", mediaIdade);
    printf("A maior da idade: %d\n", maiorIdade);
    for (int i = 1; i < repeat; i++)
    {
        printf("Os vetores da maior idade: %d\n", vectorPosition[i]);
    }
    return 0;
}