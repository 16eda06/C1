#include<stdio.h>

void print(char* desc, size_t size)
{
    printf("size of %s is = %lu\n", desc, size);
}

int main(int argc, char const *argv[])
{
    print("char[4]",sizeof(char[4]));
    print("int",    sizeof(int));
    print("long",   sizeof(long));
    print("float",  sizeof(float));
    print("double", sizeof(double));
    print("char*",  sizeof(char*));
    print("int*",   sizeof(int*));
    print("unsing", sizeof(unsigned));

    return 0;
}
