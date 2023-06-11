/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:37:09 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/24 16:54:40 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	flag;
	int	i;
	int	j;

	flag = 1;
	i = 0;
	j = 0;
	while (flag)
	{
		if (dest[i] == '\0')
		{
			while (src[j] != '\0')
			{
				dest[i] = src[j];
				i++;
				j++;
			}
			dest[i] = '\0';
			flag = 0;
		}
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char str1[50] = "Hello";
	char str2[50] = " school";

	ft_strcat(str1, str2);
	printf("%s\n", str1);
	strcat(str1, str2);
	printf("%s\n", str1);
	return (0);
}
*/
