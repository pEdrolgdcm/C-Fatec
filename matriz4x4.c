#include <stdio.h>
int main()
{
    // matriz 4x4
    int mat[4][4], s = 0, linha, coluna;
    for (linha = 0; linha <= 3; linha++)
    {
        for (coluna = 0; coluna <= 3; coluna++)
        {
            printf("Digite o valor para a posicao: [%d][%d]: ", linha, coluna);
            scanf("%d", &mat[linha][coluna]);
            s = s + mat[linha][coluna];
        }
    }
    printf("Totsl da soma = %d\n", s);

    return (0);
}