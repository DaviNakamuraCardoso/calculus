#include <stdio.h>
#include <math.h>

typedef long double ld;

void baskhara(ld a, ld b, ld c);

int main(void)
{
    ld a, b, c;

    scanf("%Lf, %Lf, %Lf", &a, &b, &c);

    baskhara(a, b, c);

    return 0;

}


void baskhara(ld a, ld b, ld c)
{
    ld x1, x2, delta = b*b - 4*a*c;

    if (delta < 0)
    {
        printf("Doesn't exist.\n");
        return;
    }

    x1 = (-b + sqrtl(delta)) / (2 * a);
    x2 = (-b - sqrtl(delta)) / (2 * a);

    printf("X1 is: %Lf\nX2 is: %Lf\n", x1, x2);
    return;
}
