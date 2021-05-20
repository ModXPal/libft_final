/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 09:02:05 by rcollas           #+#    #+#             */
/*   Updated: 2021/05/02 09:13:49 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (i + j);
}

int	main(void)
{
	char src[7] = "source";
	char dest[20] = "destination";
	printf("Before : %s\n", src);
	printf("Before : %s\n", dest);
	ft_strlcat(dest, src, 2);
	printf("After: %s\n", src);
	printf("After: %s\n", dest);
}
