/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvinici2 <mvinici2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 21:35:25 by mvinici2          #+#    #+#             */
/*   Updated: 2021/07/20 03:10:39 by mvinici2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num[3];
	char	sep[2];

	num[0] = '0';
	num[1] = '1';
	num[2] = '2';
	sep[0] = ',';
	sep[1] = ' ';
	write(1, num, 3);
	num[2] = '3';
	while (num[0] <= '7')
	{
		while (num[1] <= '8')
		{
			while (num[2] <= '9')
			{
				write(1, sep, 2);
				write(1, num, 3);
				++num[2];
			}
			num[2] = ++num[1] + 1;
		}
		num[1] = ++num[0] + 1;
		num[2] = num[1] + 1;
	}
}
