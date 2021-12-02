#include<stdio.h>
int main(int argc, char const *argv[])
{
    int c;

    while ((c = getchar()) != 's') {
        printf("value = %d\n", c);
        putchar(c);
    }
    return 0;
}
