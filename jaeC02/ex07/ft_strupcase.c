/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:36:55 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/23 10:43:33 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ('a' <= str[count] && str[count] <= 'z')
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "this is a string";
	char str2[] = "adfsatqwer12314adfdsaf";
	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str2));
	return (0);
}
*/
