#include<stdio.h>
#include<math.h>

unsigned long int next = 1;

int main(int argc, char const *argv[])
{
    printf("%f\n%s=%f\n%d\n", pow(2,3), "sqrt(3)", sqrt(3), rand());
    return 0;
}

int rand(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int) (next/65536) % 32768;
}

void srand(unsigned int seed)
{
    next = seed;
}