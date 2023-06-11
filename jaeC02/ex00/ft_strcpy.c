/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:50:03 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/23 13:52:18 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char hello[50] = "helloworld";
	char goodbye[50] = "goodbyeworld";
	char adelaide[50] = "adelaide";
	char melbourne[50] = "melbourne";
	char *return_string;
	char *return_string2;

	return_string = ft_strcpy(hello, goodbye);
	return_string2 = strcpy(adelaide, melbourne);
	printf("%s\n", hello);
	printf("%s\n", adelaide);
}
*/
