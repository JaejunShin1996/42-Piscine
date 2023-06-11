/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:32:01 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/29 17:15:04 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	result = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
	}
	return (0);
}

void	ft_sort_str_tab(char **tab, int size)
{
	char	*temp;
	int		count;
	int		flag;

	count = 1;
	flag = 1;
	while (flag)
	{
		flag = 0;
		count = 1;
		while (count < size - 1)
		{
			if (ft_strcmp(tab[count], tab[count + 1]) == 1)
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

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		return (0);
	}
	else if (argc == 2)
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
	else
	{
		ft_sort_str_tab(argv, argc);
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
