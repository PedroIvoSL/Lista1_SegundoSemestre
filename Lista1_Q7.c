#include <stdio.h>
#include <math.h>

int main()
{
    int count, option;
    float CDs[100], higher[100], porcentagem;
    printf("Quantos CDs iram ser cadastrados: ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        printf("Digite o preço do CD de numero %d: ", i);
        scanf("%f", &CDs[i]);
    }

    system("cls");
    printf("1-aumentar 10%% de todos os produtos\n");
    printf("2-informar porcentagem que foi aumentada dos produtos\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        for (int i = 1; i <= count; i++)
        {
            higher[i] = CDs[i] + (CDs[i] * 0.10);
        }
        break;
    case 2:
        printf("Digite a porcentagem que voce deseja aumentar para o preco dos CDs: ");
        scanf("%f", &porcentagem);
        for (int i = 1; i <= count; i++)
        {
            higher[i] = (CDs[i] + (CDs[i] * (porcentagem / 100)));
        }
        break;
    default:
        printf("opcao invalida!");
    }
    printf("---------------valores---------------\n");
    printf("| sem aumento     |  com aumento    |\n");
    for (int i = 1; i <= count; i++)
    {
        printf("| %d CD: %.2f       |  %d CD: %.2f      |\n", i, CDs[i], i, higher[i]);
    }
    printf("-------------------------------------\n");
    return 0;
}