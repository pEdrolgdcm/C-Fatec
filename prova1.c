#include <stdio.h>
int main()
{
    int x;
    for (x = 0; x <= 50; x++)
        if (x % 3 == 0)
        {
            printf("\n Número divisível por 3 de 0 a 50: %d\n", x);
        }
    return (0);
}