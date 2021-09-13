#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	int i = 42;
	int a = 2503;


	if (i >= 10)
	{
		ft_putchar('0' + 42 / 10);
		ft_putchar('0' + 42 % 10);
	}
}
