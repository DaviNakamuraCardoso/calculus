/*
 *
 *
 *      Calculates integrals
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define PI 3.1415


typedef long double ld; 

enum side { 
    LEFT, 
    RIGHT, 
    MIDDLE
};


ld integral(ld (*f) (ld), ld n, ld start, ld end, enum side s)
{
   
    ld sum = 0, step, val; 
    unsigned int i; 

    for (step = ((end-start) / n), val = start, i = 0; i < n; i++, val += step)
    {
        sum += (f(val) + f(val+step)) / 2;    
    }    
    
    return sum * step;
}

static ld f1(ld x)
{
    // y = x^4
    return powl(x, 4);
}

static ld f2(ld x)
{
    return powl(x, 2) - 4; 
}

static ld f3(ld x)
{
    return sinl(sqrtl(x)); 
}

static ld f4(ld x)
{
    return (x / (x+1)); 
}

static ld f5(ld x)
{
    return x*x; 

}

static ld f6(ld x)
{
    return sinl(5*x); 
}

int main(void)
{
    ld n[] = {
        5, 10, 50, 100, 1000, 10000
    }; 

    for (int i = 0; i < 6; i++)
    {
        printf("The approximation for %.0Lf rectangles is %Lf\n", n[i], integral(f6, n[i], 0, PI,  RIGHT));  
    
    }

}
