#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    double leg_x, leg_y, result;
    leg_x = 3.1;
    leg_y = 4.2;
    result = hypot(leg_x, leg_y);
    printf("%f, %f and %f form a right-angled triangle.\n", leg_x, leg_y, result);

    double param;
    param = 1000;
    result = sqrt(param);
    printf("sqrt(%f) = %f\n", param, result);
    return 0;
}
