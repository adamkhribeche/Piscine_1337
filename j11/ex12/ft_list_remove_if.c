/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moi.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 14:04:45 by nkhribec          #+#    #+#             */
/*   Updated: 2019/03/07 17:00:55 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

struct s_list	*prev;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*remove;
	t_list	*current;

	current = *begin_list;
	while (current && current->next && (*cmp)(current->data, data_ref) == 0)
	{
		remove = current;
		current = current->next;
		free(remove);
	}
	*begin_list = current;
	prev = current;
	current = current->next;
	while (current)
	{
		if ((*cmp)(current->data, data_ref) == 0)
		{
			remove = current;
			prev->next = current->next;
			free(remove);
		}
		else
			prev = current;
		current = current->next;
	}
}
