#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    
    while (*str)
    {
        i++;
        str++;
    }
    return i;
}

int main(void)
{
    char    *a = "strgfb";

    printf("%d", ft_strlen(a));
}