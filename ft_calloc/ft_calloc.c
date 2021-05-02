/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:07:48 by rcollas           #+#    #+#             */
/*   Updated: 2021/04/26 15:22:29 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *array;

	if (!(array = (void *)malloc(size * nmemb)))
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb * size > 2147483647)
		return (NULL);
	return (array);
}

int	main(void)
{
	char *test;
	int i;

	i = 0;
	if(!(test = (char *)ft_calloc(2147483647, 1)))
		return (0);
	while (i < 10)
	{
		test[i] = 'a' + i;
		i++;
	}
	printf("%s\n", test);
}
