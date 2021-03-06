#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

 
typedef long double ld;


static unsigned long factl(unsigned int n)
{
    unsigned long f = 1;

    for (unsigned int i = 1; i <= n; i++)
        f *= n;

    return f;
}
    
unsigned int error_alternating_series(ld (*f) (unsigned int), ld error)
{
    unsigned int i = 0;
    for (; labs(f(i)) > labs(error); i++)
        ;
    return i; 
}

ld series(ld (*f) (unsigned int), unsigned int n)
{
    ld sum = 0; 
    for (unsigned int i = 1; i <= n; i++)
    {
        sum += f(i);
        printf("%Lf, ", sum);
    }

    printf("\n"); 

    return sum; 
}

ld f1(unsigned int n)
{
    return (ld) (1 / (pow(n, 4) + pow(n, 2))); 
} 

ld f2(unsigned int n)
{
    return sinl(n); 
}

ld f9(unsigned int n)
{ 
    return (ld) 12 / pow(-5, n);
}

ld f11(unsigned int n)
{
    return (ld) n / sqrtl(pow(n, 2) + 4);
}

ld f13(unsigned int n)
{
    return (ld) 1 / (pow(n, 2) + 1); 
}

// 11.3
ld f37(unsigned int n)
{
    return (ld) 1 / pow(n,2);
}

ld f39(unsigned int n)
{
    return (ld) 1 / powl(2*n + 1, 6);
}

// 11.4
ld f33(unsigned int n)
{
    return (ld) 1 / (5 + pow(n, 5)); 
}

ld f35(unsigned int n)
{
    return (ld) (1 / pow(5, n)) * powl(cosl(n), 2);
}

// 11.5
ld f21(unsigned int n)
{
    return (ld) (powl(-0.8, n) / factl(n));
}

int main(void)
{
//    series(f1, 8);
//    series(f2, 8); 
//    series(f9, 10);
//    series(f11, 10);
//    series(f13, 10);
//    series(f37, 10);
//    series(f39, 10); 
//    series(f33, 10); 
//    series(f35, 10);
//    series(f21, 10);
    printf("%i\n", error_alternating_series(f21, powl(1/10, 4)));
    return 0; 
}
