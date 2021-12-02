#include<stdio.h>

int bitcount(unsigned x)
{
    int b;
    for (b=0; x!=0; x>>=1)
        if (x & 01)
            b++;
    return b;
}

int main(int argc, char const *argv[])
{
    int number;
    scanf("%d", &number);
    printf("%d\n", bitcount(number));
    return 0;
}

