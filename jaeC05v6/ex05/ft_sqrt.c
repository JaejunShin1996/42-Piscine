/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:48:42 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/30 09:50:23 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	base;

	base = 1;
	while (base * base <= nb && base <= 46340)
	{
		if (base * base == nb)
		{
			return (base);
		}
		base++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(-25));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(48));
	printf("%d\n", ft_sqrt(64));
	printf("%d\n", ft_sqrt(INT_MAX));
	return (0);
}
*/
