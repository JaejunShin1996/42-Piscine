/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:27:18 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/29 17:31:47 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 5));
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(99, 99));
	printf("%d\n", ft_iterative_power(4, 5));
	printf("%d\n", ft_iterative_power(5, 5));
	printf("%d\n", ft_iterative_power(6, 5));
}
*/
