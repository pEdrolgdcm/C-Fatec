void verificabuffer(void)
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}