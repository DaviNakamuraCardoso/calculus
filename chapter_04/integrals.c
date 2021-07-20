/*
 *
 *
 *      Calculates integrals
 *
 */


#include <stdio.h>
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
        sum += f(val);    
    }    
    
    return sum * step;
}

static ld f1(ld x)
{
    // y = x^4
    return powl(x, 4);
}


int main(void)
{
    ld n[] = {
        10, 30, 50, 100, 1000, 10000
    }; 

    for (int i = 0; i < 6; i++)
    {
        printf("The approximation for %.0Lf rectangles is %Lf\n", n[i], integral(cosl, n[i], 0, PI/2, RIGHT));  
    
    }

}
