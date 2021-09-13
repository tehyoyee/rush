#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}

int main(void)
{
    int a;
    int b;

    a = 7;
    b = 2;
    ft_ultimate_div_mod(&a, &b);
    printf("%d %d", a, b);
}