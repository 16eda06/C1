#include<stdio.h>

typedef struct Point
{
    int x;
    int y; 
} Point;

Point addPoint(Point a, Point b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

int main(int argc, char const *argv[])
{
    Point p1, p2;
    p1.x = 1;
    p1.y = 2;
    p2.x = 2;
    p2.y = 3;
    p1 = addPoint(p1, p2);
    printf("(%d,%d)\n", p1.x, p1.y);
    return 0;
}
