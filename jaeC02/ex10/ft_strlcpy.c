/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:31:14 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/23 14:07:48 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	i;

	length = 0;
	i = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
		{
			dest[i] = src[i];
		}
		i++;
		length++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (length);
}
/*
int	main(void)
{
	int size = 13;
	char str1[] = "asdfgasdfgasdfg";
	char str2[] = "asdfgasdfgasdfg";
	char dest1[size];
	char dest2[size];

	int result = ft_strlcpy(dest1, str1, size);
	printf("mine: %i, %s\n", result, dest1);

	int result2 = strlcpy(dest2, str2, size);
	printf("strlcpy: %i, %s\n", result2, dest2);
	return (0);
}
*/
