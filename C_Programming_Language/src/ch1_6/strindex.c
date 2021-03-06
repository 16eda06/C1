#include<stdio.h>

int strindex(char s[], char t[])
{
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++) 
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    char search[100];
    gets(search);
    printf("%d\n", strindex("hello world", search));
    return 0;
}
