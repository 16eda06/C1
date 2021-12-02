#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i, n;
    int *pData;
    printf("Amount of numbers to be entered: ");
    scanf("%d", &i);
    pData = (int*) malloc(i * sizeof(int));
    if (pData == NULL)
        exit(1);
    for (n=0; n<i; n++)
    {
        printf("Enter number #%d: ", n+1);
        scanf("%d", &pData[n]);
    }

    printf("You have entered: ");
    for (n=0; n<i; n++) printf("%d ", pData[n]);
    free(pData);

    return 0;
}
