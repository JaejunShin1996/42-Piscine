/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:16:19 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/19 11:29:45 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int a = 22;
	int b = 5;
	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d", div, mod);

	return (0);
}
*/
