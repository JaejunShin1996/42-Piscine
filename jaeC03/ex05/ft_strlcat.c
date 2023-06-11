/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:43:49 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/24 16:56:40 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	get_length_of(char *ch)
{
	int	i;

	i = 0;
	while (ch[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	edit_dest(char *dest, char *src, unsigned int size)
{
	int				flag;
	unsigned int	i;
	unsigned int	j;

	flag = 1;
	i = 0;
	j = 0;
	while (flag)
	{
		if (dest[i] == '\0')
		{
			while (src[j] != '\0' && i < size - 1)
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
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				flag;
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;

	flag = 1;
	i = get_length_of(dest);
	j = get_length_of(src);
	result = 0;
	if (size < i)
	{
		result = j + size;
	}
	else
	{
		result = i + j;
		edit_dest(dest, src, size);
	}
	return (result);
}
/*
int	main(void)
{
	char	dest[50] = "123456789";
	char	src[50] = "12345";

	char	dest2[50] = "123456789";
	char	src2[50] = "12345";

	int		size = 16;

	int		result;
	int		result2;

	result = strlcat(dest, src, size);
	printf("%i, %s\n", result, dest);

	result2 = ft_strlcat(dest2, src2, size);
	printf("%i, %s\n", result2, dest2);
	return (0);
}
*/
