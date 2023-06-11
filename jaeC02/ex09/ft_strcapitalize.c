/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:31:58 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/23 20:30:49 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	word_detector(char c)
{
	int	w_d;

	w_d = 0;
	if (!(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')))
	{
		if (!('0' <= c && c <= '9'))
		{
			w_d = 1;
		}
		else
		{
			w_d = 0;
		}
	}
	return (w_d);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	w_detect;

	i = 0;
	w_detect = 1;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z') && w_detect)
		{
			str[i] -= 32;
			w_detect = 0;
		}
		else if ('A' <= str[i] && str[i] <= 'Z' && !(w_detect))
		{
			str[i] += 32;
		}
		w_detect = word_detector(str[i]);
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "saADdf aDFf asdf as\ndf, as\tdf. :sdf; sdf. df";
	char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", ft_strcapitalize(str2));
	return (0);
}

