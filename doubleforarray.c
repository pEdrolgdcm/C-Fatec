#include <stdio.h>
int main()
{
    int a[3][3], linha, coluna;
    for (linha = 0; linha <= 2; linha++)
    {
        for (coluna = 0; coluna <= 2; coluna++)
        {
            printf("Digite uma valor para a posicao [%d]x[%d]: ", linha, coluna);
            scanf("%d", &a[linha][coluna]);
        }
    }
    for (linha = 0; linha <= 2; linha++)
    {
        for (coluna = 0; coluna <= 2; coluna++)
        {
            printf("Valor da posicao [%d]x[%d]= %d\n", linha, coluna, a[linha][coluna]);
        }
    }

    return (0);
}