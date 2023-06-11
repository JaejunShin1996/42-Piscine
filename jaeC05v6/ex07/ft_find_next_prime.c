/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 22:19:35 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/30 09:51:23 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_find_next_prime(int nb)
{
	int	base;

	base = 2;
	if (nb < 2)
	{
		return (2);
	}
	while (base * base <= nb && base <= 46340)
	{
		if (nb % base == 0)
		{
			nb++;
			base = 1;
		}
		base++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(2147483646));
	printf("%d\n", ft_find_next_prime(INT_MAX));
	return (0);
}
*/
