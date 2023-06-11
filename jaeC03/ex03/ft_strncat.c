/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:36:44 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/24 16:55:12 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
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
			while (src[j] != '\0' && 0 < nb)
			{
				dest[i] = src[j];
				i++;
				j++;
				nb--;
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
	char str1[50] = "Hell   o";
	char str2[50] = "wo  rld";
	int n = 20;

	ft_strncat(str1, str2, n);
	printf("%s\n", str1);
	strncat(str1, str2, n);
	printf("%s\n", str1);
	return (0);
}
*/
