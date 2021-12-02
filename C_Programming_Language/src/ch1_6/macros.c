#include<stdio.h>
#define max(a, b) (a > b ? a : b)
#define square(x) (x * x)
#define paste(front, back) front ## back

int main(int argc, char const *argv[])
{
    printf("%d\n", max(2,3));
    printf("%d\n", square(3));
    printf("%d\n", paste(1,3));
    return 0;
}
