/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:53:20 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/24 16:55:48 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if ((str[i] == ' ' || str[i] == '\0') && to_find[j] == '\0')
			{
				i -= j;
				while (str[i] != '\0')
				{
					return (&str[i]);
					i++;
				}
			}
		}
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	haystack[] = "Thi4s is 442scho42ol   ";
	char	needle[] = "";
	char	needle2[] = "";
	char	*ptr = ft_strstr(haystack, needle);
	char	*ptr2 = ft_strstr(haystack, needle2);
	char	*ptr3 = strstr(haystack, needle2);

	printf("%s\n", ptr);
	printf("%s\n", ptr2);
	printf("%s\n", ptr3);
	return (0);
}
*/
