#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char szInput[256];
    printf("Enter a sentence:");
    gets(szInput);
    printf("The sentence entered is %u characters long.\n", (unsigned)strlen(szInput));

    return 0;
}