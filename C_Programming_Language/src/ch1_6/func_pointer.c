#include<stdio.h>

int addInt (int n, int m)
{
    return n + m;
}

int multiplyInt (int n, int m)
{
    return n * m;
}

int (*functionPtr)(int, int);

int (*functionFactory(int n))(int, int)
{
    printf("Got parameter %d", n);
    int (*functionPtr)(int, int) = &addInt;
    return functionPtr;
}

int main(int argc, char const *argv[])
{
    functionPtr = &addInt;
    printf("%d\n", (*functionPtr)(2,3));

    functionPtr = &multiplyInt;
    printf("%d\n", (*functionPtr)(2,3));

    return 0;
}
