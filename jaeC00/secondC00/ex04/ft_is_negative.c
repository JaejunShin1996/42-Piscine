/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:41:37 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/18 12:57:27 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letter_n;
	char	letter_p;

	letter_n = 'N';
	letter_p = 'P';
	if (n < 0)
	{
		write(1, &letter_n, 1);
	}
	else
	{
		write(1, &letter_p, 1);
	}
}
