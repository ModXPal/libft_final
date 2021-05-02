/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:46:04 by rcollas           #+#    #+#             */
/*   Updated: 2021/04/26 13:23:00 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static	int	ft_isdigit(int c)
{
	if (c >='0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int sign;
	int nb;

	nb = 0;
	sign = 1;
	if (*nptr == '-')
	{
		sign *= -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		nb =  nb * 10 + *nptr - 48;
		nptr++;
	}
	return (nb * sign);
}

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	int test = ft_atoi(argv[1]);
	printf("%d\n", atoi(argv[1]));
	printf("%d\n", test);
}
