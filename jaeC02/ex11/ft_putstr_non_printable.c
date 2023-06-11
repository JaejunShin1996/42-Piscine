/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 20:01:55 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/23 14:14:12 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	dec_to_hex(char ch)
{
	if (ch <= 9)
	{
		ft_putchar('O');
		ft_putchar(ch + 48);
	}
	else if (10 <= ch && ch <= 15)
	{
		ft_putchar('O');
		ft_putchar(ch % 16 + 87);
	}
	else
	{
		ft_putchar(ch / 16 + 48);
		ft_putchar(ch % 16 + 87);
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	ch;

	ch = 'j';
	while (*str != '\0')
	{
		if (!(32 <= *str && *str <= 126))
		{
			ft_putchar('\\');
			ch = *str;
			dec_to_hex(ch);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
/*
int	main(void)
{
	char str[] = "Co\tucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}
*/
