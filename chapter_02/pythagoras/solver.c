/*
 *
     * Solves the Pythagorean Theorem
 *
 *
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    long double a, b, c;
    scanf("%Lf, %Lf", &a, &b);

    c = sqrtl(a*a+b*b);

    printf("C is %Lf\n", c);

    return 0;  
}
