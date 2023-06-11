/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:52:13 by jaeshin           #+#    #+#             */
/*   Updated: 2023/06/03 17:08:20 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

char	*ft_line_value(char *line)
{
	char	*temp[30];

	while (*line)
	{
		if (*line == ':')
		{
			line++;
			while (*line != '\0')
			{
				*temp = *line;
				temp++;
				line++;
			}
		}
		line++;
	}

	return (temp);
}
