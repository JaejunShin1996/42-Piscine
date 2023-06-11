/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:05:02 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/06/04 21:05:28 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		length;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	ptr = (char *)malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (src[length] != '\0')
	{
		ptr[length] = src[length];
		length++;
	}
	ptr[length] = '\0';
	return (ptr);
}
