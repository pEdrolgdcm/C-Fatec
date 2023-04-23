#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Qual o primeiro numero? ");
    scanf("%d", n1);
    printf("Qual o segundo numero? ");
    scanf("%d", n2);
    printf("Qual o terceiro numero? ");
    scanf("%d", n3);
    if (n1 > n2 > n3)
    {
        printf("Numero 1 é o maior");
    }
    else if (n1<n2> n3)
    {
        printf("Numero 2 e o maior");
    }
    else if (n1 < n2 < n3)
    {
        printf("Numeor 3 e o maior");
    }
    else
    {
        printf("Nao consegui achar nada");
    }
    return (0);
}