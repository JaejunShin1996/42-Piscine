/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:36:16 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/25 10:28:12 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	result = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
	}
	return (0);
}
/*
int	main(void)
{
	char word[] = "ab";
	char word2[] = "abc";
	int	result1 = ft_strcmp("jae", "jun");
	int	result2 = ft_strcmp("jae", "jae");
	int	result3 = ft_strcmp(word2, word);
	int	result4 = ft_strcmp(word, word2);
	int	result5 = strcmp(word, word2);
	int	result6 = strcmp(word2, word);
	printf("%i\n", result1);
	printf("%i\n", result2);
	printf("%i\n", result3);
	printf("%i\n", result4);
	printf("%i\n", result5);
	printf("%i\n", result6);
	return (0);
}
*/
