/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:09:50 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/18 12:45:33 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	reverse_digits(int input_digit)
{
	int	reverse;
	int	remainder;

	reverse = 0;
	while (input_digit != 0)
	{
		remainder = input_digit % 10;
		reverse = reverse * 10 + remainder;
		input_digit /= 10;
	}
	return (reverse);
}

void	write_minus(void)
{
	char	minus;

	minus = '-';
	write(1, &minus, 1);
}

void	ft_putnbr(int nb)
{
	int		temp_nb;
	char	int_to_char;

	temp_nb = reverse_digits(nb);
	if (temp_nb < 0)
	{
		write_minus();
		temp_nb *= -1;
	}
	while (temp_nb > 10)
	{
		int_to_char = 48 + temp_nb % 10;
		write(1, &int_to_char, 1);
		temp_nb /= 10;
	}
	int_to_char = 48 + temp_nb % 10;
	write(1, &int_to_char, 1);
}
