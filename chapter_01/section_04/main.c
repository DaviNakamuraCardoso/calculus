/**
*
*
*       Solving some problems
*
*/

#include <stdio.h>
#include <math.h>

#define pi 3.1415

typedef long double ld;

ld calc(ld x);
ld g(ld x1, ld y1, ld x, ld (*f) (ld));
ld h(ld x, ld x2, ld (*f) (ld));

static ld f4(ld a);
static ld f5(ld a);
static ld f6(ld a);
static ld f7(ld a); 

int main(int argc, char** argv)
{
    ld a, b;
    int status;

    do {
        status = scanf("%Lf, %Lf", &a, &b);
        printf("%Lf\n", h(a, b, f7));

    } while (status == 2);
    return 0;

}


long double g(long double x1, long double y1, long double x, long double (*f) (long double))
{
    return (f(x)-y1 / (x-x1));
}

long double calc(long double x)
{
    return ((-1 - (1/(1-x))) / (2 - x));
}

ld h(ld x, ld x2, ld (*f) (ld))
{
    return (f(x) - f(x2)) / (x - x2);
}

static ld f4(ld a)
{
    return (cosl(a*pi));
}

static ld f5(ld a)
{
    return (40 * a  - (16*a*a));
}

static ld f6(ld a)
{
    return (10*a - 1.86f * a * a);
}

static ld f7(ld a)
{
    ld vals[] = {
        0,
        4.9,
        20.6,
        46.5,
        79.2,
        124.8,
        176.7
    };

    return vals[(int) a];
}
