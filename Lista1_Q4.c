#include <stdio.h>
#include <string.h>

int main()
{
    char letras[30];
    int TAM;

    printf("Digite quaisquer letras (Limite de 30): ");
    gets(letras);
    TAM = strlen(letras);
    for (int i = TAM - 1; i >= 0; i--)
    {
        printf("%c", letras[i]);
    }
    return 0;
}