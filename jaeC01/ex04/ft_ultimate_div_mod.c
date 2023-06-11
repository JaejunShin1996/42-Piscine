/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:30:31 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/19 11:37:05 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	remainder;

	result = *a / *b;
	remainder = *a % *b;
	*a = result;
	*b = remainder;
}

/*
int main(void)
{
	int a = 22;
	int b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%i, %i", a, b);
	return (0);
}
*/
