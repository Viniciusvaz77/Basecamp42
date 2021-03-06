/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvinici2 <mvinici2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 00:16:31 by mvinici2          #+#    #+#             */
/*   Updated: 2021/07/26 18:24:11 by mvinici2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(('z' >= *str && *str >= 'a') || ('Z' >= *str && *str >= 'A')))
		{
			return (0);
		}
		++str;
	}
	return (1);
}
