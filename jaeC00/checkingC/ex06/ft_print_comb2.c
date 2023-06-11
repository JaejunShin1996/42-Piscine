/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:12:39 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/18 12:39:43 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_comb(int first_two, int second_two)
{
	ft_putchar('0' + first_two / 10);
	ft_putchar('0' + first_two % 10);
	ft_putchar(' ');
	ft_putchar('0' + second_two / 10);
	ft_putchar('0' + second_two % 10);
	if (first_two != 98 || second_two != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_while_loops(int first_two, int second_two)
{
	int	first_count;
	int	second_count;

	first_count = 0;
	second_count = 1;
	while (first_two <= 98)
	{
		write_comb(first_two, second_two);
		second_two++;
		if (second_two > 99)
		{
			first_two++;
			first_count++;
			if (second_count < 99)
			{
				second_count++;
			}
			first_two = first_count;
			second_two = second_count;
		}
	}
}

void	ft_print_comb2(void)
{
	int	first_two;
	int	second_two;

	first_two = 0;
	second_two = 1;
	ft_while_loops(first_two, second_two);
}
