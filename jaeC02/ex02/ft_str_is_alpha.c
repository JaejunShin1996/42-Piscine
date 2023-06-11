/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 10:39:50 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/23 13:59:40 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0' && flag == 1)
	{
		if (!(('a' <= *str && *str <= 'z') || ('A' <= *str && *str <= 'Z')))
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
	char	str[] = "asASDFSADFSAfdvcxzfdsa";
	char	str2[] = "asdfasfsa1dafasvcxz";
	char	str3[] = "dfasdfdf0123dfdadsf";

	printf("%i\n", ft_str_is_alpha(""));
	printf("%i\n", ft_str_is_alpha(str));
	printf("%i\n", ft_str_is_alpha(str2));
	printf("%i\n", ft_str_is_alpha(str3));
	return (0);
}
*/
