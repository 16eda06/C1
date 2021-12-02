#include<stdio.h>
#include<string.h>

void mystrcpy(char *s, char *t)
{
    int i;
    i = 0;
    while ((s[i] = t[i]) != '\0')
    {
        i++;
    }
}

void mystrcpy1(char *s, char *t)
{
    while ((*s = *t) != '\0')
    {
        s++;
        t++;
    }        
}

void mystrcpy2(char* s, char *t)
{
    while ((*s++ = *t++) != '\0');
}

void mystrcpy3(char* s, char *t)
{
    while ((*s++ = *t++));
}

int main(int argc, char const *argv[])
{
    char* s = "Hello World";
    char t[100];
    mystrcpy3(t, s);
    printf("%s\n", t);    
    return 0;
}
