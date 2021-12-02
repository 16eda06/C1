#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char str[80];
    
    strcpy(str, "these ");
    strcat(str, "strings ");
    strcat(str, "are ");
    strcat(str, "concatenated.");
    puts(str);

    return 0;
}
