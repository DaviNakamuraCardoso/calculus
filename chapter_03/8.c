
#include <stdio.h>
#include <math.h>

typedef long double ld;


static ld df1(ld x)
{
    return (-(2/(x*x)) - 2*x); 
}

static ld f1(ld x)
{
    return (2/x) - (x*x) + 1; 
}

static ld f2(ld x)
{
    return (x*x*x*x) - 75; 
}

static ld df2(ld x)
{
    return 4 * (x*x*x);
}

static ld f3(ld x)
{
    return (3 * powl(x, 4) - 8 * powl(x, 3) + 2); 
}

static ld df3(ld x)
{
    return (12 * powl(x, 3) - 24 * powl(x, 2)); 
}

static ld f4(ld x)
{
    return (sinl(x) - powl(x, 2));
}

static ld df4(ld x)
{
    return (cosl(x) - 2 * x);
}

static ld f5(ld x)
{
    return (3 * cosl(x) - x - 1);
}

static ld df5(ld x)
{
    return (-3 * sinl(x) - 1);
}


static ld f6(ld x)
{
    return (1/x - powl(x, 1/3) + 1);
}

static ld df6(ld x)
{
    return (-1/(x*x) - 1/(pow(x*x, 1/3)));
}
ld newton(ld val, ld (*f) (ld), ld (*df) (ld), unsigned int iterations)
{
    ld x = val;  

    for (unsigned int i = 0; i < iterations; i++)
    {
        x = x - (f(x) / df(x));
    } 

    return x;
}

int main(void)
{
    ld a; 

    scanf("%Lf", &a); 
    printf("%.8Lf\n", newton(a, f6, df6, 6));

    return 0; 
}


