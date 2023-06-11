/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:07:33 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/23 20:18:03 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}


int main(void)

{
	int nb = 0;
	int* ptr1 = &nb;
	int** ptr2 = &ptr1;
	int*** ptr3 = &ptr2;
	int**** ptr4 = &ptr3;
	int***** ptr5 = &ptr4;
	int****** ptr6 = &ptr5;
	int******* ptr7 = &ptr6;
	int******** ptr8 = &ptr7;

	ft_ultimate_ft(&ptr8);
	printf("%d", nb);
}
