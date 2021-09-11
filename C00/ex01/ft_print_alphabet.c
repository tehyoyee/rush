#include <unistd.h>

void ft_print_alphabet(void){
	char first;
	first = 'a';

	while (first <= 'z'){
		write(1, &first, 1);
		first++;
	}
}

