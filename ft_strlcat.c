/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 09:02:05 by rcollas           #+#    #+#             */
/*   Updated: 2021/05/21 20:07:34 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (dst[i])
		i++;
	while (src[j] && i < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j < size)
		dst[i + j] = 0;
	return (i + j);
}
