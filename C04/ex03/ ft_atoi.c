/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvinici2 <mvinici2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 22:07:35 by mvinici2          #+#    #+#             */
/*   Updated: 2021/07/30 22:08:59 by mvinici2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	while ((9 <= *str && *str <= 15) || *str == ' ')
		++str;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		++str;
	}
	num = 0;
	while ('9' >= *str && *str >= '0')
	{
		num *= 10;
		num += sign * (*str - '0');
		++str;
	}
	return (num);
}
