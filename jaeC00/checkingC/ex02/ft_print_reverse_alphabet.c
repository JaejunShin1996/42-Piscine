/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:11:31 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/18 12:51:34 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	first_letter;

	first_letter = 'z';
	while (first_letter > 96)
	{
		write(1, &first_letter, 1);
		first_letter--;
	}
}
