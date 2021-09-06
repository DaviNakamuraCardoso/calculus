#include <stdio.h>
#include <math.h>

 
typedef long double ld;

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

int main(void)
{
    series(f1, 8);
    series(f2, 8); 
    series(f9, 10);
    series(f11, 10);
    series(f13, 10);
    return 0; 
}
