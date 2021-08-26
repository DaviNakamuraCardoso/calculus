#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef long double ld; 

#define e 2.1718281828459045

ld euler(ld initial, ld (*f) (ld,ld), ld step, ld start, ld end)
{
    ld y = initial;

    for (ld x = start; x < end; x+=step)
    {
        y += f(x,y) * step;
    }

    return y;
}
        

ld f1(ld x, ld y)
{
    return y - 2 * x;
}

ld f2(ld x, ld y)
{
    return y + x * y;
}

ld f3(ld x, ld y)
{
    return 6 * powl(x,2) - 3 * powl(x,2) * y;
}


ld P(ld x)
{
    ld n = 20 * powl(10,9);
    ld d = 1 + (14/6) * powl(e, -x/210);

    return n / d;
}


int main(void)
{
    ld real, ap, error; 
    ld steps[] = { 1, 0.1, 0.01, 0.001 }; 

    //printf("%Lf\n", euler(0, f1, 0.5, 1, 3));
    //printf("%Lf\n", euler(1, f2, 0.1, 0, 0.5)); 



    real = 2 + powl(e, -1);

    for (short i = 0; i < 4; i++)
    {
        ap = euler(3, f3, steps[i], 0, 1); 
        error = real - ap;
        printf("The approximation for step %Lf is %Lf\n", steps[i], ap); 
        printf("The error in this approximation is %Lf\n\n", (error > 0)? error : -error); 
    }


    inline ld f4(ld x, ld y) { return 12 - 4 * y; }

    printf("%Lf\n", euler(0, f4, 0.1, 0, 0.5));

    printf("%Lf\n", P(10));
    printf("%Lf\n", P(100));
    printf("%Lf\n", P(250));

    return 0; 
}




