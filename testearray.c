// variavel indexada, vetor e array são tudo a mesma coisa
#include <stdio.h>
int main()
{
    int d;
    while (scanf("%d", d) != EOF)
    {
        int var[5] = {0, 1, 7, 2, 3};
        printf("%d", var[d]);
    }
    return (0);
}