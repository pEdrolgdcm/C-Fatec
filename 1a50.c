#include <stdio.h>
int main()
{
    int x, qd = 0;
    for (x = 1; x <= 50; x++)
    {
        if (x % 5 == 0)
        {
            qd++;
        }
    }
    printf("Quantidade de numeros = %d\n", qd);

    return (0);
}