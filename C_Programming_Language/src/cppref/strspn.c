#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int i;
    char strtext[] = "129th";
    char cset[] = "1234567890";

    i = strspn(strtext, cset);
    printf("The initial number has %d digits.\n", i);

    return 0;
}
