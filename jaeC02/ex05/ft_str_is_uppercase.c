/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:43:51 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/23 10:41:10 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0' && flag == 1)
	{
		if (!('A' <= *str && *str <= 'Z'))
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
	printf("%i\n", ft_str_is_uppercase("asdfzxcvasdf"));
	printf("%i\n", ft_str_is_uppercase("asdfzxAvasdf"));
	printf("%i\n", ft_str_is_uppercase("asdVzxcvasdf"));
	printf("%i\n", ft_str_is_uppercase("asdf!@zxcvasdf"));
	printf("%i\n", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("%i\n", ft_str_is_uppercase("asdfzx123cvasdf"));
	printf("%i\n", ft_str_is_uppercase("asdfz?\\xcvasdf"));
	return (0);
}
*/
