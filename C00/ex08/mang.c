#include <unistd.h>

void put_char(char c)
{
	write(1, &c, 1);
}

void put_zero(int a, int max)
{
	int x = max / a;

	while (x > 10)
	{
		put_char('0');
		x = x / 10;
	}
}

void put_num(int n)
{	
	int i;
	if (n >= 10)
	{
		put_num(n / 10);
		put_num(n % 10);
	}
	else
	{
		i = n + 48;
		put_char(i);
	}
}

int check(int cur, int n)
{
	int bool = 1;
	int i = 1;
	int	arr[10];
	arr[0] = cur;

	while (arr[0] != 0)
	{
		arr[i] = arr[0] % 10;
		arr[0] = arr[0] / 10;
	}
	i = 1;
	while (i < n)
	{
		if (arr[i] <= arr[i + 1])
			bool = 0;
	}
}
int main()
{
	int n = 3;
	int i = 1;
	int max = 1;

	while (n > 0)
	{
		max *= 10;
		n--;
	}

	while ( i < max )
	{
		if ( check(i, n) == 1)
		{
			put_zero(i, max);
			put_num(i);
			put_char(',');
			put_char(' ');
			i++;
		}
	}	
}