/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvinici2 <mvinici2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 02:36:42 by mvinici2          #+#    #+#             */
/*   Updated: 2021/07/27 02:36:56 by mvinici2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ret;
	unsigned int	i;

	i = 0;
	ret = dest;
	while (*dest != '\0')
		++dest;
	while (*src != '\0' && i < nb)
	{
		*dest++ = *src++;
		++i;
	}
	*dest = '\0';
	return (ret);
}
