#include<stdio.h>
double ftoc(double fahr);
double ctof(double celc);
int main(int argc, char const *argv[])
{
    double fahr, celc;

    printf("\n F to C\n");
    for (fahr = 0; fahr < 300; fahr += 20)
    {
        celc = ftoc(fahr); 
        printf("%10.2f degrees F |%10.2f degrees C\n", fahr, celc);
    }
    
    printf("\n C to F\n");
    for (celc = 0; celc < 300; celc += 20)
    {
        fahr = ctof(celc);
        printf("%10.2f degrees C |%10.2f degrees F\n", celc, fahr);
    }

    return 0;
}
double ftoc(double fahr) 
{
    return 5 * ((fahr - 32) / 9);
}
double ctof(double celc)
{
    return ((9 * celc) / 5) + 32;
}