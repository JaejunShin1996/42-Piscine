/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:32:48 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/23 10:39:48 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0' && flag == 1)
	{
		if (!('a' <= *str && *str <= 'z'))
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
	printf("%i\n", ft_str_is_lowercase("asdfzxcvasdf"));
	printf("%i\n", ft_str_is_lowercase("asdfzxAvasdf"));
	printf("%i\n", ft_str_is_lowercase("asdVzxcvasdf"));
	printf("%i\n", ft_str_is_lowercase("asdf!@zxcvasdf"));
	printf("%i\n", ft_str_is_lowercase("asdfzx123cvasdf"));
	printf("%i\n", ft_str_is_lowercase("asdfz?\\xcvasdf"));
	return (0);
}
*/
