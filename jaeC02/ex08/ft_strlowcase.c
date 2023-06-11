/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:10:29 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/21 15:13:20 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ('A' <= str[count] && str[count] <= 'Z')
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}

/*
int	main(void)
{
	char str[] = "THIS IS A STRING";
	char str2[] = "JAEJUNSHIN 123242131JAEJUN";
	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str2));
	return (0);
}
*/
