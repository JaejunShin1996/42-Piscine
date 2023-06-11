/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:13:51 by jaeshin           #+#    #+#             */
/*   Updated: 2023/06/05 15:37:02 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_stock_str
{
	int	size;
	char *str;
	char *copy;
}	t_stock_str;

#endif
