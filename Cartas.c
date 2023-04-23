#include <stdio.h>

int main()
{
    int a, b, c;

    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a == b)
        {
            printf("%d\n", c);
        }
        if (a == c)
        {
            printf("%d\n", b);
        }
        if (b == c)
        {
            printf("%d\n", a);
        }
    }
    return (0);
}