/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehyoyee <taehykim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:09:42 by tehyoyee          #+#    #+#             */
/*   Updated: 2021/09/12 12:09:44 by tehyoyee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	last;

	last = 'z';
	while (last >= 'a')
	{
		write(1, &last, 1);
		last--;
	}
}
