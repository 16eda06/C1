#include<stdio.h>
#include<assert.h>

void print_number(int* myInt)
{
    assert (myInt != NULL);
    printf("%d\n", *myInt);
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int *b = NULL, *c = NULL;

    b = &a;

    print_number(b);
    print_number(c);

    return 0;
}
