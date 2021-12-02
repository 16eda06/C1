#include<stdio.h>

#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))

typedef struct point
{
    int x;
    int y;
} point;

typedef struct rect
{
    point p1;
    point p2;
} rect;

rect canonrect(rect* r)
{
    rect temp;

    temp.p1.x = min(r->p1.x, r->p2.x);
    temp.p1.y = min(r->p1.y, r->p2.y);
    temp.p2.x = max(r->p1.x, r->p2.x);
    temp.p2.y = max(r->p1.y, r->p2.y);

    return temp;
}

int main(int argc, char const *argv[])
{
    rect r;
    scanf("%d %d %d %d", 
        &r.p1.x, &r.p1.y, &r.p2.x , &r.p2.y);

    r = canonrect(&r);
    printf("(%d,%d), (%d,%d), size = %lu\n", 
        r.p1.x, r.p1.y, r.p2.x, r.p2.y, sizeof(r));

    return 0;
}
