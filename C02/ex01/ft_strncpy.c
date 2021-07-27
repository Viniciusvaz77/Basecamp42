/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvinici2 <mvinici2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 00:00:15 by mvinici2          #+#    #+#             */
/*   Updated: 2021/07/26 18:15:07 by mvinici2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (*src != '\0' && ++i < n)
		dest[i] = *src++;
	while (++i < n)
		dest[i] = '\0';
	return (dest);
}
