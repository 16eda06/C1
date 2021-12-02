#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MODE_ATOF 1
#define MODE_STRDOD 2
#define MODE_ATOI 3
#define MODE_BSEARCH 4

int compareints (const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main(int argc, char const *argv[])
{
    int mode = MODE_BSEARCH;

    int i;
    double n, m;
    char buffer[256];
    char* pEnd;
    
    char buffer1[] = "365.24 29.53";

    int values[] = {50,20,60,40,10,30};
    int *pItem, key = 40;

    switch (mode)
    {
        case MODE_ATOF:
            printf("Enter degress : ");
            scanf("%s", buffer);
            n = atof(buffer);
            m = sin((double)(n * M_PI)/ 180);
            printf("The sine of %f degrees is %f\n", n, m);
            break;

        case MODE_STRDOD:
            // input 1 : "365.24 29.53"
            // scanf("%s", buffer);
            n = strtod(buffer1, &pEnd);
            printf("%f\n", n);
            m = strtod(pEnd, NULL);
            printf("%f\n", m);
            printf("The moon completes %.2f orbits per earth year\n", n/m);
            break;

        case MODE_ATOI:
            printf("Enter a number : ");
            scanf("%s", buffer);
            i = atoi(buffer);
            printf("The number is %d\n", i);
            break;

        case MODE_BSEARCH:
            qsort(values, 6, sizeof(int), compareints);
            pItem = 
                (int*) bsearch(
                    &key, values, 6, sizeof(int), compareints);
            if (pItem != NULL)
                printf("%d is in the array.\n", *pItem);
            else
                printf("%d is not in the array.\n", key);
            break;

        default:
            break;
    }

    return 0;
}
