#include<stdio.h>

/*  Calculates m^n  */
int power(int m, int n);

int main(int argc, char const *argv[])
{
    int i, p;
    scanf("%d", &i);
    scanf("%d", &p);
    printf("%d^%d = %d", i, p, power(i, p));
    return 0;
}

int power(int m, int n) 
{
    int product = 1, i = 0;
    for (; i<n; i++)
        product *= m;
    return product;
}