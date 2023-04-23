#include <stdio.h>
int main()
{
    int h, p;
    while (scanf("%d %d", &h, &p) != EOF) //EOF= end of file, significa q enquanto n for final de arquivo, vai repetir
    {
        printf("%.2f\n", (float)h / p);
    }
    return (0);