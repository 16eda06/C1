#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int x = 1, y = 2, z[10];
    int *ip;

    ip = &x;
    y = *ip;
    *ip = 1000;
    ip = &z[0];

    printf("\n%d\t%d\t%d\n",x, y, *ip);

    int array[] = {1,2,3,4}, i = 0;

    for (;i<4;i++)
    {
        printf("\n%d", *(array+i));
    }

    printf("\n%lu", strlen("Meghaditya Roy Chaudhury"));

    return 0;
}
