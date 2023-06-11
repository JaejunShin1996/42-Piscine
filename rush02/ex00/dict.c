/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:25:32 by jaeshin           #+#    #+#             */
/*   Updated: 2023/06/04 22:00:07 by jchoy-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include "ft_strdup.c"

dict	*array_dict(void)
{
	int	file_open = open("numbers.dict", O_RDONLY);
	if (file_open == -1)
	{
		ft_putstr("Failed to open the dict file \n");
		return (NULL);
	}

	dict	*values;
	int		i;
	int		j;
	int		k;
	char	*reader;
	char	*temp;
	char	*temp2;

	i = 0;
	j = 0;
	k = 0;
	values = malloc(sizeof(dict) * 100);
	reader = malloc(sizeof(char) * 1);
	while (i < 32)
	{
		j = 0;
		k = 0;
		temp = malloc(sizeof(char) * 50);
		temp2 = malloc(sizeof(char) * 50);
		values[i].value = malloc(sizeof(char) * 50);

		read(file_open, reader, 1);
		while (reader[0] == '\n')
			read(file_open, reader, 1);
		while ('0' <= reader[0] && reader[0] <= '9')
		{
			printf("%c", reader[0]);
			temp[j] = reader[0];
			read(file_open, reader, 1);
			j++;
		}
		values[i].key = ft_atoi(temp);

		while (reader[0] == ' ' || reader[0] == ':')
			read(file_open, reader, 1);

		while (reader[0] == '\n')
			read(file_open, reader, 1);
		while (reader[0] != '\n')
		{
			printf("%c", reader[0]);
			temp2[k] = reader[0];
			read(file_open, reader, 1);
			k++;
		}
		temp2[k] = '\0';
		values[k].value = ft_strdup(temp2);
		free(temp);
		free(temp2);
		i++;
	}

	close(file_open);

	return (values);
}
