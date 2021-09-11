#include <unistd.h>

void ft_putchar(char c);

void ft_put_wrap(int x)
{	
	int temp = x;
    ft_putchar('o');
	if (x < 2)
	{
		return 0;
	}
	while (x >= 3)
	{
		ft_putchar('-');
		x--;
	}
	ft_putchar('o');
	ft_putchar('\n');
	x = temp;
}

void ft_put_middle(int x, int y)
{
	int temp = x;

	while (y >= 3)
	{
		ft_putchar('|');
		if (x < 2)
		{
			return (0);
		}
		while (x >= 3)
		{
			ft_putchar(' ');
			x--;
		}
		ft_putchar('|');
		ft_putchar('\n');
		y--;
		x = temp;
	}
}



void rush(int x, int y)
{
    ft_put_wrap(x);
	ft_put_middle(x, y);
	ft_put_wrap(x);
}