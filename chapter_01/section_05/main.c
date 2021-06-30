/**
*
*
*       Problems from Calculus (James Stewart)
*
*/

#include <stdio.h>
#include <math.h>

typedef long double ld;

static ld f19(ld x);
static ld f20(ld x);
static ld f21(ld x);
static ld f23(ld t);
static ld f24(ld p);
static ld f25(ld x);
static ld f26(ld t);


int main(void)
{
    ld a, b;
    int status, index;

    ld (*f[]) (ld) = {
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,f19,f20,f21,0,f23,f24, f25,f26

    };

    scanf("%i", &index);

    do {
        status = scanf("%Lf", &a);
        printf("Positive: %Lf\n", f[index](a));
        printf("Negative: %Lf\n", f[index](-a));

    } while (status);
}


static ld f19(ld x)
{
    return ((x*x - 3*x) / (x*x - 9));
}

static ld f20(ld x)
{
    return f19(x);
}

static ld f21(ld x)
{
    return ((sinl(x)) / (x + tanl(x)));
}

static ld f23(ld t)
{
    return ((sinl(3*t)) / (tanl(2*t)));
}

static ld f24(ld p)
{
    return ((1+powl(p,9)) / (1+powl(p,15)));
}

static ld f25(ld x)
{
    return powl(x, x);
}

static ld f26(ld t)
{
    return ((powl(5, t) - 1) / t);
}
