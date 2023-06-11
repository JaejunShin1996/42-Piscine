/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:31:09 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/18 12:40:31 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	while_helper(int first, int second, int third)
{
	ft_putchar('0' + first);
	ft_putchar('0' + second);
	ft_putchar('0' + third);
}

void	write_comma_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	first_digit;
	int	second_digit;
	int	third_digit;

	first_digit = 0;
	while (first_digit <= 7)
	{
		second_digit = first_digit + 1;
		while (second_digit <= 8)
		{
			third_digit = second_digit + 1;
			while (third_digit <= 9)
			{
				while_helper(first_digit, second_digit, third_digit);
				if (first_digit != 7 || second_digit != 8 || third_digit != 9)
				{
					write_comma_space();
				}
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}
}
