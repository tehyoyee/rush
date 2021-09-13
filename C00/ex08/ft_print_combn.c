/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehyoyee <taehykim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:16:55 by tehyoyee          #+#    #+#             */
/*   Updated: 2021/09/12 18:17:04 by tehyoyee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *nums, int n)
{
	if (nums[0] == 10 - n + '0')
		write(1, nums, n);
	else
		write(1, nums, n + 2);
}

void	comb(int n, int count, char *nums)
{
	int index;

	if (count == n)
	{
		print(nums, n);
		return ;
	}
	index = 0;
	while (index < 10)
	{
		if (count == 0 || nums[count - 1] < index + 48)
		{
			nums[count] = index + '0';
			comb(n, count + 1, nums);
		}
		index++;
	}
}

void	ft_print_combn(int n)
{
	char nums[n + 2];

	nums[n] = ',';
	nums[n + 1] = ' ';
	comb(n, 0, nums);
}

int main(void)
{
	ft_print_combn(1);
	ft_print_combn(2);
	ft_print_combn(3);
}
