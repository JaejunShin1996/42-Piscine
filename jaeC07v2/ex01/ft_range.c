/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:32:05 by jaeshin           #+#    #+#             */
/*   Updated: 2023/06/01 11:54:13 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	i;
	unsigned int	size;
	int				*result;

	i = 0;
	size = max - min;
	result = malloc(sizeof(int) * size);
	if (min >= max)
	{
		return (NULL);
	}
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
/*
int	main(void)
{
	int a = 4;
	int b = 9;
	int	i = 0;
	int	*range = ft_range(a, b);
	while (i < 5)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/
