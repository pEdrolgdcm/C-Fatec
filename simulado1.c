#include <stdio.h>
int main()
{
    int ano;
    printf("Qual ano?: ");
    scanf("%d", &ano);
    if ((ano % 4 == 0) && (ano || ano / 400) && (ano != ano / 100))
    {
        printf("o ano e bissexto");
    }
    else
    {
        printf("o ano nao e bissexto");
    }
    return (0);
}