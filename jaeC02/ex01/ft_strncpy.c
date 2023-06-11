/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:33:30 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/27 14:47:57 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char 	str2[] = "hi";
	char 	str1[] = "goodbye";
	char 	str3[] = "goodbye";
	int index = 1;

	ft_strncpy(str1, str2, index);
	strncpy(str3, str2, index);
	printf("%s\n", str1);
	printf("%s\n", str3);
	return (0);
}
*/
