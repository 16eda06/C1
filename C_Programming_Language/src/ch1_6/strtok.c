#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char str[] = "Meghaditya Roy Chaudhury";
    char *pch;

    pch = strtok(str, " ");

    while (pch != NULL)
    {
        printf("%s\n", pch);
        pch = strtok(NULL, " ");
    }
    
    return 0;
}
