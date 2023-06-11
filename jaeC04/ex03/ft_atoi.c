/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:40:48 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/27 10:37:04 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	minus_counter(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == '-')
		{
			count++;
		}
		else if ('0' <= *str && *str <= '9')
		{
			if (count % 2 == 1)
			{
				return (-1);
			}
			return (1);
		}
		str++;
	}
	if (count % 2 == 1)
	{
		return (-1);
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	minus;
	int	nbr;

	minus = minus_counter(str);
	nbr = 0;
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
		{
			while ('0' <= *str && *str <= '9')
			{
				nbr *= 10;
				nbr += *str - 48;
				str++;
			}
			return (nbr * minus);
		}
		str++;
	}
	return (nbr * minus);
}

int	main(void)
{
	char *str = "";
	int result = ft_atoi(str);
	printf("%d\n", result);

	char *str1 = "         ---65554---%^$345";
	int result1 = ft_atoi(str1);
	printf("%d\n", result1);

	char *str2 = "----++65554.345";
	int result2 = ft_atoi(str2);
	printf("%d\n", result2);
}

