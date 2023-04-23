#include <stdio.h>

int soma(int x, int y)
{
    return(x+y);
}

int main()
{
    int a,b;
    printf("Digite um valor: ");
    scanf("%d",&a);
    printf("Digite outro valor: ");
    scanf("%d",&b);

    printf("Total = %d\n",soma(a,b));

    return(0);
}