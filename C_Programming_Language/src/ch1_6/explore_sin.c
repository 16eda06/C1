#include<stdio.h>
#include<math.h>

#define PRECISION 0.0001

int isOne(double val)
{
    val = (val < 0) ? (val * -1) : val;
    if (val < (1 + PRECISION) 
        && val >= (1 - PRECISION))
        return 1; 
    else
        return 0;
}

int isZero(double val)
{
    val = (val < 0) ? (val * -1) : val;
    if (val < (0 + PRECISION) 
        && val >= (0 - PRECISION))
        return 1; 
    else
        return 0;
}

int main(int argc, char const *argv[])
{
    int i;
    for (i=0; i<=90; i++)
    {
        double sinVal = sin((double)i);
        double cosVal = cos((double)i);
        if (isZero(sinVal) 
            || isOne(sinVal) 
            || isZero(cosVal) 
            || isOne(cosVal)) 
            {
                // printf("\n%d\t%d\t%d\t%d", 
                //     isZero(sinVal), isZero(cosVal),
                //     isOne(sinVal), isOne(cosVal));
                printf("\n%d\t%0.2g\t%0.2g", 
                    i, sinVal, cosVal);

            }
    }
    return 0;
}
