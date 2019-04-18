/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 17:48:09 by nkhribec          #+#    #+#             */
/*   Updated: 2019/03/06 17:50:32 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		count;

	count = 0;
	if (!begin_list)
		return (count);
	tmp = begin_list;
	while (tmp)
	{
		tmp = tmp->next;
		++count;
	}
	return (count);
}
