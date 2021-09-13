/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tehyoyee <taehykim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:09:27 by tehyoyee          #+#    #+#             */
/*   Updated: 2021/09/12 12:09:31 by tehyoyee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	first;

	first = 'a';
	while (first <= 'z')
	{
		write(1, &first, 1);
		first++;
	}
}
