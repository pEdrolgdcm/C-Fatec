#include <stdio.h>
int main()
{
    int x, numero = 0, maior = 0, menor = 0;
    while (numero >= 0)
    {
        printf("me de um numero positivo: ");
        scanf("%d", &numero);
        if (numero > 0)
            if (numero > maior)
                maior = numero;
            else
                menor = numero;
    }
    printf("O maior eh %d e o menor eh %d\n", maior, menor);
    return 0;
}