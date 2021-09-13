#include <unistd.h>

void ft_print_comb2(void)
{
	char a[2];
	char b[2];

	a[0] = '0';
	a[1] = '0';
	while (a[0] <= '9')
	{
		while (a[1] <= '9')
		{
			if (a[1] == '9')
			{	
				b[1] = '0';
				b[0] = a[0] + 1;
			}
			else
			{
				b[0] = a[0];
				b[1] = a[1] + 1;
			}
				while ( b[0] <= '9')
				{
					while (b[1] <= '9')
					{
						write(1, a, 2);
						write(1, " ", 1);
						write(1, b, 2);
						if (a[0] == '9' && a[1] == '8' && b[0] == '9' && b[1] == '9')
							break;
						write(1, ", ", 2);
						b[1]++;
					}
					b[0]++;
					b[1] = '0';
				}
				a[1]++;
		}
		a[0]++;
		a[1] = '0';
	}
}

int main()
{
	ft_print_comb2();
}