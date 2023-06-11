/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:25:44 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/23 10:36:42 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0' && flag == 1)
	{
		if (!('0' <= *str && *str <= '9'))
		{
			flag = 0;
			return (flag);
		}
		str++;
	}
	return (flag);
}
/*
int	main(void)
{
	char str[] = "1234215321421";
	printf("%i\n", ft_str_is_numeric(str));
	printf("%i\n", ft_str_is_numeric(""));
	printf("%i\n", ft_str_is_numeric("123243211232431"));
	printf("%i\n", ft_str_is_numeric("123243211232431"));
	printf("%i\n", ft_str_is_numeric("12324321^1232431"));
	printf("%i\n", ft_str_is_numeric("12324321_1232431"));
	return (0);
}
*/
