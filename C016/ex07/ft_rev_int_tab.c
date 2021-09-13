#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i = 0;

    while (i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = temp;
        i++;
    }
}

int main(void)
{
    int a[6] = {8,2,3,2,5,4};
    int b = 6;
    ft_rev_int_tab(a, b);
    
    for(int i = 0; i < 6; i++)
        printf("%d", a[i]);
}