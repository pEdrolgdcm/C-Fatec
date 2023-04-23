#include <stdio.h>
int main()
{
    int h, p;
    while (scanf("%d %d", &h, &p) != EOF)
    {
        printf("%.2f\n", (float)h / p);
    }
    return (0);
}