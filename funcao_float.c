#include <stdio.h>

float div(int, int);

int main()
{
    int func;
    func = (float)div(10,20);
    printf("Divis�o = %f\n",func);
    func = (float)div(50,70);
    printf("Divis�o = %f\n",func);
    func = (float)div(1024,976);
    printf("Divis�o = %f\n",func);
    return(0);
}

float div(int x, int y)
{
    return(x/y);
}
