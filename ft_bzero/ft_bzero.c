/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:08:34 by rcollas           #+#    #+#             */
/*   Updated: 2021/04/18 12:25:45 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		*(unsigned char *)(s + i++) = 0;
}

int	main(void)
{
	char rbzero[10] = "test";
	char ft_rbzero[10] = "test";
	printf("%s\n", rbzero);
	bzero(rbzero, 2);
	printf("%s\n", rbzero);
	printf("%s\n", ft_rbzero);
	ft_bzero(ft_rbzero, 2);
	printf("%s\n", ft_rbzero);
}
