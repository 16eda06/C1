#include<stdio.h>
#include<limits.h>

void print(char* desc, int val)
{
    printf("%s\t%d\n", desc, val);
}

void printl(char* desc, long val)
{
    printf("%s\t%ld\n", desc, val);
}

void printu(char* desc, unsigned long val)
{
    printf("%s\t%lu\n", desc, val);
}

int main(int argc, char const *argv[])
{
    print("CHAR_BIT", CHAR_BIT);
    print("SCHAR_MIN", SCHAR_MIN);
    print("SCHAR_MAX", SCHAR_MAX);
    print("UCHAR_MAX", UCHAR_MAX);
    print("CHAR_MIN", CHAR_MIN);
    print("CHAR_MAX", CHAR_MAX);

    print("SHRT_MIN", SHRT_MIN);
    print("SHRT_MAX", SHRT_MAX);
    print("USHRT_MAX", USHRT_MAX);
    print("INT_MIN", INT_MIN);
    print("INT_MAX", INT_MAX);    
    printl("UINT_MAX", UINT_MAX);

    printl("LONG_MIN", LONG_MIN);
    printl("LONG_MAX", LONG_MAX);
    printl("LLONG_MIN", LLONG_MIN);
    printl("LLONG_MAX", LLONG_MAX);
    printu("ULONG_MAX", ULLONG_MAX);

    return 0;
}
