/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:44:10 by jaeshin           #+#    #+#             */
/*   Updated: 2023/06/01 11:33:32 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		count;

	count = ft_strlen(src);
	str = malloc(sizeof(char) * (count));
	str = ft_strcpy(str, src);
	return (str);
}
/*
int	main(void)
{
	char *str = "Helloasdfas";
	char *str2 = ft_strdup(str);

	printf("%s\n", str2);
}
*/
