/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 21:55:41 by rcollas           #+#    #+#             */
/*   Updated: 2021/04/18 22:06:11 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static	int	ft_strlen(const unsigned char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *temp;
	size_t i;

	i = -1;
	if (!(temp = (unsigned char *)malloc(sizeof(*temp) * ft_strlen(src) + 1)))
		return (NULL);
	while (++i < n)
	{
		*(temp + i) = *(unsigned char *)(src + i); 
		*(unsigned char *)(dest + i) = *(temp + i);
	}
	return (dest);
}

int	main(void)
{
	char src[15] = "source";
	char dest[15] = "destination";
	char ft_src[15] = "source";
	char ft_dest[15] = "destination";
	memmove(dest, src, 4);
	printf("%s\n", dest);
	ft_memmove(ft_dest, ft_src, 4);
	printf("%s\n", ft_dest);
}
