/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:25:22 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/25 17:42:48 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	to_binary_octal(int i, char *result, int count, int div)
{
	char	c;

	while (i > 0)
	{
		c = i % div + 48;
		result[count] = c;
		i /= div;
		count++;
	}
	while (count > 0)
	{
		ft_putchar(result[count - 1]);
		count--;
	}
}

void	to_hexa(int i, char *result, int count)
{
	char	c;

	while (i > 0)
	{
		if (10 <= (i % 16) && (i % 16) <= 15)
		{
			c = (i % 16) + 55;
			result[count] = c;
		}
		else
		{
			c = (i % 16) + 48;
			result[count] = c;
		}
		i /= 16;
		count++;
	}
	while (count > 0)
	{
		ft_putchar(result[count - 1]);
		count--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	result[50];
	int		count;

	count = 0;
}
/*
int	main(void)
{
	ft_putnbr_base(345, "01");
}
*/
