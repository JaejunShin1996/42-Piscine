/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:55:43 by jaeshin           #+#    #+#             */
/*   Updated: 2023/06/11 15:42:03 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		has_char(char c, char *str)
{
	while (*str)
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

int		strs_l(char *str, char *charset)
{
	int	part;
	int count;

	part = 1;
	count = 0;
	while (*str)
	{
		if (!has_char(*str, charset) && part)
		{
			count++;
			part = 0;
		}
		else if (has_char(*str, charset))
			part = 1;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src, char *charset)
{
	char	*dest;
	char	*buffer;
	int		length;

	length = 0;
	buffer = src;
	while (*buffer && !has_char(*buffer++, charset))
		length++;
	dest = (char*)malloc(sizeof(*src) * length);
	buffer = dest;
	while (*src && length-- > 0)
		*buffer++ = *src++;
	*buffer = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	**tmp;
	int		part;

	strs = (char**)malloc(strs_l(str, charset) * sizeof(*strs) + 1);
	tmp = strs;
	part = 1;
	while (*str)
	{
		if (!has_char(*str, charset) && part)
		{
			part = 0;
			*tmp = ft_strdup(str, charset);
			tmp++;
		}
		else if (has_char(*str, charset))
			part = 1;
		str++;
	}
	*tmp = 0;
	return (strs);
}
/*
int		main(int argc, char *argv[])
{
	char **strs;

	if (argc == 3)
	{
		printf("str: %s\n", argv[2]);
		printf("sep: %s\n", argv[1]);

		strs = ft_split(argv[2], argv[1]);
		while (*strs)
			printf("%s\n", *strs++);
	}
	printf("\n");
	return (0);
}*/
