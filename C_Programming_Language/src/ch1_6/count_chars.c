#include<stdio.h>
int main(int argc, char const *argv[])
{
    int c, i, nwhite = 0, nother = 0;
    int ndigit[10];

    for (i=0; i<10; i++)
        ndigit[i] = 0;

    for (i=0; i<10; i++)
        printf("\nndigit[%d] = %d\n", i, ndigit[i]);

    while ((c = getchar()) != '\n') {
        printf("\n%c", c);
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nwhite;
        else
            ++nother;
    }

    printf("\nDigits");
    for (i=0; i<10; i++)
        printf("\nndigit[%d] = %d", i, ndigit[i]);
    printf("\nWhitespaces = %d", nwhite);
    printf("\nOther = %d", nother);

    return 0;
}
