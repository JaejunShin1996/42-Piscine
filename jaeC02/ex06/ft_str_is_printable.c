/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:15:32 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/23 10:42:37 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0' && flag == 1)
	{
		if (!(32 <= *str && *str <= 126))
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
	printf("%i\n", ft_str_is_printable("derewadfewerw 12312432534665476"));
	printf("%i\n", ft_str_is_printable("!@#$%^&*()_+"));
	printf("%i\n", ft_str_is_printable("asFDSAVCXZKLJRPEIWNL"));
	printf("%i\n", ft_str_is_printable("derewa\tdfewe  FDSAFDSA"));
	printf("%i\n", ft_str_is_printable("asdf\nasdfas"));
	return (0);
}
*/
