/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:43:46 by rcollas           #+#    #+#             */
/*   Updated: 2021/05/02 08:58:33 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (src[i] && dest[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (i);
}

int	main(void)
{
	char src[7] = "source";
	char dest[11] = "destination";
	printf("Before : %s\n", src);
	printf("Before : %s\n", dest);
	ft_strlcpy(dest, src, 4);
	printf("After : %s\n", src);
	printf("After : %s\n", dest);
}
