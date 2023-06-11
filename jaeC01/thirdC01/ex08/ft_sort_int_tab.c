/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 09:51:04 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/20 13:54:56 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	count;
	int	flag;

	count = 0;
	flag = 1;
	while (flag)
	{
		flag = 0;
		count = 0;
		while (count < size - 1)
		{
			if (tab[count] > tab[count + 1])
			{
				temp = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = temp;
				flag = 1;
			}
			count++;
		}
	}
}

/*
int	main(void)
{
	int	numbers[8] = {1,34,54,665,321,2,2,2};
	int count = 0;

	ft_sort_int_tab(numbers, 8);
	while (count <= 7)
	{
		printf("%d, ", numbers[count]);
		count++;
	}
	return (0);
}
*/
