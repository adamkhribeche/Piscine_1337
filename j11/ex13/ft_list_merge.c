/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 09:01:08 by nkhribec          #+#    #+#             */
/*   Updated: 2019/03/07 16:55:28 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	if (!begin_list1 || !*begin_list1)
		*begin_list1 = begin_list2;
	else
	{
		current = *begin_list1;
		while (current->next)
			current = current->next;
		current->next = begin_list2;
	}
}
