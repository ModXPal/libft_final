/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:58:00 by rcollas           #+#    #+#             */
/*   Updated: 2021/05/21 14:08:03 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_intlen(long int nb)
{
	long int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			charlen;
	char		*nb;
	long int	num;

	num = n;
	charlen = ft_intlen(n);
	if (n < 0)
		num *= -1;
	nb = (char *)malloc(sizeof(*nb) * charlen + 1);
	if (!nb)
		return (NULL);
	nb[charlen] = 0;
	charlen--;
	while (num > 0)
	{
		nb[charlen] = num % 10 + 48;
		num /= 10;
		charlen--;
	}
	if (n < 0)
		nb[charlen] = '-';
	return (nb);
}
