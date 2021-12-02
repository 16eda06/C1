#include<stdio.h>
#include<ctype.h>

char* is_it_true(int value)
{
    return value != 0 ? "true" : "false";
}

int main(int argc, char const *argv[])
{
    int i;
    char str[] = "c3po ..";
    i = 0;

    while (str[i] != '\0') {
        // printf("'%c', isalnum:%s\n", str[i], is_it_true(isalnum(str[i])));
        // printf("'%c', isalpha:%2s\n", str[i], is_it_true(isalpha(str[i])));
        // printf("'%c', isblank:%2s\n", str[i], is_it_true(isblank(str[i])));
        printf("'%c', isdigit:%2s\n", str[i], is_it_true(isdigit(str[i])));
        i++;
    }
    
    return 0;
}
