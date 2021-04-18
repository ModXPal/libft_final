/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 22:10:36 by rcollas           #+#    #+#             */
/*   Updated: 2021/04/18 02:11:28 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		*(unsigned char *)(s + i++) = c;
	return (s);
}

int	main(void)
{
	int tab[10] = {0};
	int tab_ft[10] = {0};
	printf("%d\n", tab[0]);
	memset(tab, 0, 8);
	printf("%d\n", tab[0]);
	ft_memset(tab_ft, 0, 8);
	printf("%d\n", tab_ft[0]);
}
