/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:57:56 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/29 12:18:35 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power > 1)
	{
		result *= ft_recursive_power(nb, power - 1);
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(0, 2));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(3, 2));
	printf("%d\n", ft_recursive_power(4, 4));
	printf("%d\n", ft_recursive_power(5, 3));
	printf("%d\n", ft_recursive_power(6, 2));
}
*/
