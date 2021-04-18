/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:38:28 by rcollas           #+#    #+#             */
/*   Updated: 2021/04/18 21:47:38 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n && *(unsigned char *)(src + i - 1) != c)
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
	if (*(unsigned char *)(src + i - 1) != c)
		return (NULL);
	return (dest + i);
}

int	main(void)
{
	char src[15] = "source";
	char dest[15] = "destination";
	char ft_src[15] = "source";
	char ft_dest[15] = "destination";
	unsigned char *test;
	unsigned char *ft_test;
	test = (unsigned char *)memccpy(dest, src, 's', 1);
	ft_test = (unsigned char *)ft_memccpy(ft_dest, ft_src, 's', 1);
	printf("%s\n", test);
	printf("%s\n", dest);
	printf("%s\n", ft_test);
	printf("%s\n", ft_dest);
}
