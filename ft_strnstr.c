/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:12:34 by rcollas           #+#    #+#             */
/*   Updated: 2021/05/21 20:12:34 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == 0)
		return (NULL);
	while (haystack[i] && i + 1 < len)
	{
		while (needle[i + j])
		{
			if (needle[i + j + 1] == 0)
				return ((char *)&(haystack[i]));
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
