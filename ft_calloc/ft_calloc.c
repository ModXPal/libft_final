/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:07:48 by rcollas           #+#    #+#             */
/*   Updated: 2021/05/20 15:50:10 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc(size * nmemb);
	if (!array)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb * size > 2147483647)
		return (NULL);
	return (array);
}
