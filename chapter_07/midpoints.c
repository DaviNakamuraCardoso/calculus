#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef long double ld;

ld midpoints(n, start, end, f)
    int n;
    ld start, end;
    ld (*f) (ld);
{
    unsigned int i;
    ld val = 0;
    ld delta = (end - start) / n;

    for (i = 0; i < n; i++)
    {
        ld x = ((double) (delta * i + delta*(i+1)) / 2) + start;
        val += f(x);
    } 

    return val*delta;

}

ld trapezoidal(n, start, end, f)
    int n;
    ld start, end;
    ld (*f) (ld);
{
    unsigned int i;
    ld delta = (end - start) / n;
    ld val = 0;

    for (i = 0; i <= n; i++)
    {
        ld x, x2, v;
        switch (i) {
            case 0: { v = f(start); break; }
            default: { 
                x = start + (delta*i); x2 = start + (delta*(i+1)); 
                v = f(x) + f(x2);
                if (i == n) { v = f(end); }
            }
        }

            val += v;
    }

    return (val*delta/2);
}


ld f1(ld x)
{
    return powl(cosl(x), 2);
}


int main(argc, argv)
    int argc; const char** argv;
{
    ld start = atof(argv[1]), end = atof(argv[2]);
    int n = atoi(argv[3]);
    printf("The midpoint rule approximation is %Lf\n", midpoints(n, start, end, f1));
    printf("The trapezoidal rule approximation is %Lf\n", trapezoidal(n, start, end, f1)); 
    return 0; 
}
