#include<stdio.h>

float media(float, float);

int main()
{
    float m, n1, n2;
    printf("Informe n1: ");
    scanf("%f",&n1);
    printf("Informe n2: ");
    scanf("%f",&n2);
    m = media(n1,n2);
    printf("Media = %.2f",m);
    return(0);
}

float media(float x, float y)
{
    return((x+y)/2);
}
