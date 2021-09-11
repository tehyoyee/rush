#include <unistd.h>

void ft_print_comb(void) {
	char a[3];
       	a[0] = '0';
	
	while (a[0] <= '6')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write(1, a, 3);
				a[2]++;
				write(1, ", ", 2);
			}
			a[1]++;
		}
		a[0]++;
	}
	write(1, "789", 3);
}
