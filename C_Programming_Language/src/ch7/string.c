#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s[100], t[100];

    scanf("%s", s);
    scanf("%s", t);

    printf("%s\n", strcat(s,t));
    printf("%s\n", s);
    printf("%s\n", strncat(t,t,1));
    printf("%s\n", t);
    printf("%d\n", strcmp(s,t));
    return 0;
}
