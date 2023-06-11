/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:23:53 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/20 19:45:29 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	size -= 1;
	while (count < size)
	{
		temp = tab[count];
		tab[count] = tab[size];
		tab[size] = temp;
		count++;
		size--;
	}
}

/*
int	main(void)
{
	int numbers[14] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5};
	int size = 0;

	ft_rev_int_tab(numbers, 14);

	while (size <= 13)	
	{
		printf("%d", numbers[size]);
		size++;
	}
	return (0);
}
*/
