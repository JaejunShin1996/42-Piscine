/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:18:04 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/30 09:51:06 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	base;

	base = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (base * base <= nb && base <= 46340)
	{
		if (nb % base == 0)
		{
			return (0);
		}
		base++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(6));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(127));
	printf("%d\n", ft_is_prime(2147483647));
	return (0);
}
*/
