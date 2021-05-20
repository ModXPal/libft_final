/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 21:55:41 by rcollas           #+#    #+#             */
/*   Updated: 2021/05/20 15:56:25 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static	int	ft_strlen(const unsigned char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	i = -1;
	temp = (unsigned char *)malloc(sizeof(*temp) * ft_strlen(src) + 1);
	if (!temp)
		return (NULL);
	while (++i < n)
	{
		*(temp + i) = *(unsigned char *)(src + i);
		*(unsigned char *)(dest + i) = *(temp + i);
	}
	return (dest);
}
