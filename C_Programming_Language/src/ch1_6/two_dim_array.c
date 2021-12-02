#include<stdio.h>

static char daytab[2][13] = {
    {0, 
    31, 28, 31, 30, 
    31, 30, 31, 31, 
    30, 31, 30, 31},
    {0, 
    31, 29, 31, 30, 
    31, 30, 31, 31, 
    30, 31, 30, 31}
};

int day_of_year(int year, int month, int day)
{
    int i, leap;

    leap = 
        year%4 == 0 
        && year%100 != 0 
        || year%400 == 0;

    for (i = 1; i<month; i++)
        day += daytab[leap][i];

    return day;
}

void month_day(int year, int yearday, 
    int *pmonth, int *pday)
{
    int i, leap;
    leap = 
        year%4 == 0 
        && year%100 != 0 
        || year%400 == 0;

    for (i=1; yearday>daytab[leap][i]; i++)
        yearday -= daytab[leap][i];

    *pmonth = i;
    *pday = yearday;
}

char* month_name(int n)
{
    char *name[] =
    {
        "Illegal Month",
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    return (n < 1 || n > 12) ? name[0] : name[n];
}

int main(int argc, char const *argv[])
{
    int pmonth, pday;

    printf("%d\n", day_of_year(1990, 4, 24));
    month_day(1990, 114, &pmonth, &pday);
    printf("%s\t%d\n", month_name(pmonth), pday);

    printf("%d\n", day_of_year(1992, 1, 3));
    month_day(1992, 3, &pmonth, &pday);
    printf("%s\t%d\n", month_name(pmonth), pday);

    return 0;
}
