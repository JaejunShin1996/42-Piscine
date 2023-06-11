/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:10:35 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/25 10:30:34 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	result;

	result = 0;
	while ((*s1 != '\n' || *s2 != '\n') && 0 < n)
	{
		if (*s1 < *s2)
		{
			result = -1;
			return (result);
		}
		else if (*s1 > *s2)
		{
			result = 1;
			return (result);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	int	result1 = ft_strncmp("jaejun", "jun", 4);
	int	result2 = ft_strncmp("jae", "jae", 2);
	int	result3 = ft_strncmp("jaejun", "jun", 10);
	int	result4 = ft_strncmp("jaejunj", "jaejun", 3);
	int	result5 = strncmp("jaejun", "jun", 10);
	int	result6 = strncmp("jaejunj", "jaejun", 3);
	printf("%i\n", result1);
	printf("%i\n", result2);
	printf("%i\n", result3);
	printf("%i\n", result4);
	printf("%i\n", result5);
	printf("%i\n", result6);
	return (0);
}
*/
