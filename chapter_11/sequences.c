#include <stdio.h>
#include <math.h>


typedef long double ld;


ld s1(int n)
{
    return (ld) (3*n) / (1 + 6*n);
}

ld s2(int n) 
{
    return (ld) 1 + powl((ld) -1/2, n);
}

void showseq(ld (*f) (int), int upper)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%Lf, ", f(i));
    }

    printf("\n"); 
}

int main(void)
{
    showseq(s1, 10);
    showseq(s2, 10); 
    return 0;
}
