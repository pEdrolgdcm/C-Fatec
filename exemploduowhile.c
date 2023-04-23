#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int op;
    do
    {
        printf("\n Lanches McPobre, peça pelo número\n\n");
        printf("\t(1)- X Miséria");
        printf("\t(2) - XMiséria Bacon\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Você escolheu o lanche 1\n");
            break;
        case 2:
            printf("Você escolheu o lanche 2\n");
            break;
        }
    } while (op < 1 || op > 2);

    return (0);
}