#include <stdio.h>
int main()
{
    int sb, cr, vp;
    printf("Qual o seu salario? ");
    scanf("%d", &sb);
    printf("Qual o valor da prestacao? ");
    scanf("%d", &vp);
    cr = sb * 30 / 100;
    if (vp > cr)
    {
        printf("O imprestimo não pode ser concedido, pois excede o limite de credito");
    }
    else if (vp < cr)
    {
        printf("O imprestimo pode ser concedido");
    }
    else
    {
        printf("nao foi possivel realizar esta acao");
    }
    return (0);
}