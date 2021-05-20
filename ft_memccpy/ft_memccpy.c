/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:38:28 by rcollas           #+#    #+#             */
/*   Updated: 2021/05/20 15:55:33 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n && *(unsigned char *)(src + i - 1) != c)
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
	if (*(unsigned char *)(src + i - 1) != c)
		return (NULL);
	return (dest + i);
}
