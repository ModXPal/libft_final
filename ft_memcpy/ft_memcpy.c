/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:26:47 by rcollas           #+#    #+#             */
/*   Updated: 2021/04/18 12:37:37 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
	return (dest);
}

int	main(void)
{
	char src[15] = "source";
	char dest[15] = "destination";
	char ft_src[15] = "source";
	char ft_dest[15] = "destination";
	memcpy(dest, src, 3);
	printf("%s\n", dest);
	ft_memcpy(ft_dest, ft_src, 3);
	printf("%s\n", ft_dest);
}
