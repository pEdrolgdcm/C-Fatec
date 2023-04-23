#include <stdio.h>
int main()
{
    int n;

    while (scanf("%n", n) != EOF)
    {
        switch (n)
        {
        case 1:
            printf("1\n");
            break;

        case 2:
            printf("7\n");
            break;

        case 3:
            printf("3\n");
            break;

        case 4:
            printf("2\n");
            break;
        }
    }

    return 0;
}