/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 14:48:27 by nkhribec          #+#    #+#             */
/*   Updated: 2019/03/04 16:19:06 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

t_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par			*result;
	int					i;
	int					j;

	result = malloc(sizeof(*result) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		result[i].size_param = 0;
		while (av[i][result[i].size_param])
			result[i].size_param++;
		result[i].str = av[i];
		result[i].copy = malloc(result[i].size_param + 1);
		j = -1;
		while (++j < result[i].size_param + 1)
			result[i].copy[j] = av[i][j];
		result[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	result[ac].str = 0;
	return (result);
}
