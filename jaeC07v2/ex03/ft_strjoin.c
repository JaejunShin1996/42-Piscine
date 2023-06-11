/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:52:48 by jaeshin           #+#    #+#             */
/*   Updated: 2023/06/06 12:05:40 by jaeshin          ###   ########.fr       */
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
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

int	memory_count(int size, char **strs, char *sep)
{
	int	m_c;
	int	i;

	m_c = 0;
	i = 0;
	while (i < size)
	{
		m_c += ft_strlen((strs)[i]);
		if (i < size - 1)
			m_c += ft_strlen(sep);
		i++;
	}
	return (m_c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		m_c;
	int		i;

	if (size <= 0)
		return (malloc(0));
	m_c = memory_count(size, strs, sep);
	i = 0;
	result = malloc(sizeof (char) * m_c + 1);
	if (result == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcat(result, (strs)[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

int	main(void)
{
	char	*strs[] = {"Hello", "42", "school", "Adelaide", "Salam"};
	int		size = 6;
	char	*sep = ", ";
	char	*result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
}
