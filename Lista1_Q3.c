#include <stdio.h>

int main()
{
    int dados[100], i = 0, opc = 0, soma = 0;

    do{
        printf("Digite qualquer numero inteiro: ");
        scanf("%d", &dados[i++]);
        do
        {
            printf("Deseja somar outro numero? S=1|N=2");
        } while ((scanf("%d", &opc)) < 1 || opc > 2);
    }while (opc == 1);

    for (int j = 0; j < i; j++)
    {
        soma = soma + dados[j];
    }
    printf("A soma dos numeros digitados e: %d\n", soma);
    return 0;
}