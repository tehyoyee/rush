#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int a;
    int b;
    int *pt = &a;
    int *pt2 = &b;

    a = 7;
    b = 2;
    ft_div_mod(a, b, pt, pt2);
    printf("%d %d", a, b);
}