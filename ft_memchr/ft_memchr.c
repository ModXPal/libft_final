/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 22:14:28 by rcollas           #+#    #+#             */
/*   Updated: 2021/04/18 22:27:06 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && *(unsigned char *)(s + i) != c)
		i++;
	if (*(unsigned char *)(s + i) != c)
		return (NULL);
	return ((unsigned char *)(s + i));
}

int	main(void)
{
	char test[10] = "test";
	char ft_test[10] = "test";
	printf("%s\n", (unsigned char *)memchr(test, 'e', 1));
	printf("%s\n", (unsigned char *)ft_memchr(ft_test, 'e', 1));
}
