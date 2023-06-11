/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoy-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:09:06 by jchoy-me          #+#    #+#             */
/*   Updated: 2023/06/04 22:28:06 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putstr.c"
#include "ft_atoi.c"
#include "ft_rush02.h"


void	print_hundred(unsigned int nb, char *words_arr[], int counter)
{
	unsigned int	temp_nb;
	unsigned int	nb_hundred;
	unsigned int	nb_tens;

	temp_nb = nb;
	if (nb == 0)
		return ;
	if (temp_nb > 99)
	{
		nb_hundred = temp_nb / 100;
		ft_putstr(words_arr[nb_hundred]);
		ft_putstr(" ");
		ft_putstr(words_arr[28]);
		ft_putstr(" ");
		temp_nb = temp_nb - nb_hundred * 100;
	}
	if (temp_nb > 19 && temp_nb < 100)
	{
		nb_tens = temp_nb / 10;
		ft_putstr(words_arr[nb_tens + 18]);
		ft_putstr(" ");
		temp_nb = temp_nb - nb_tens * 10;
	}
	if (nb > 19)
	{
		if (temp_nb != 0)
		{
			ft_putstr(words_arr[temp_nb]);
			ft_putstr(" ");
		}
	}
	else
	{
		ft_putstr(words_arr[nb]);
		ft_putstr(" ");
	}
	if (counter == 1)
	{
		ft_putstr(words_arr[29]);
		ft_putstr(" ");
	}
	else if (counter == 2)
	{
		ft_putstr(words_arr[30]);
		ft_putstr(" ");
	}
	else if (counter == 3)
	{
		ft_putstr(words_arr[31]);
		ft_putstr(" ");
	}
}

void	print_number(unsigned int number, char *words_array[], int count)
{
	if (number > 999)
	{
		count++;
		print_number(number / 1000, words_array, count);
		count--;
	}
	print_hundred(number % 1000, words_array, count);
}

int	main(int argc, char *argv[])
{
	unsigned int	number;
	int				counter;

	if (argc != 2)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	char			*words_array[32] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred", "thousand", "million", "billion"};

	number = ft_atoi(argv[1]);
	counter = 0;
	if (number == 0)
	{
		printf("zero");
		return (0);
	}
	print_number(number, words_array, counter);
}
