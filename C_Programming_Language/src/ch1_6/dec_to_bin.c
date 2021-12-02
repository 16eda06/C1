#include<stdio.h>
#define paste(x, y) x ## y

char* reverse(char* original, int end) 
{
    int i = 0;
    while (i < end)
    {
        char t = original[end - 1];
        original[end - 1] = original[i];
        original[i] = t; 
        i++;
        end--;
    }
    return original;
}

char* getbits(int number)
{
    char bits[40];
    int i=0;
    while (number>0 && i<32)
    {
        bits[i] = '0' + number%2;
        number /= 2 ;
        i++;
    }
    bits[i] = '\0';
    return reverse(bits, i);
}

int main(int argc, char const *argv[])
{
    int number;
    scanf("%d", &number);
    printf("\n%s\n", getbits(number));
    return 0;
}
