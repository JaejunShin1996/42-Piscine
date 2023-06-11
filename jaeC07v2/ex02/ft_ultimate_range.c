/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:42:00 by jaeshin           #+#    #+#             */
/*   Updated: 2023/06/01 11:29:07 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	unsigned int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	*range = malloc(sizeof (int) * size);
	if (*range == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
/*
int	main(void)
{
	int **range = malloc(sizeof (int));
	int	min = -4;
	int	max = 15;
	int result = ft_ultimate_range(range, min, max);
	int i = 0;

	while ((*range)[i] < 14)
	{
		printf("%d, ", range[0][i]);
		i++;
	}
	return (0);
}
*/
