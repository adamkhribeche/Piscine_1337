/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 16:47:33 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/16 11:30:53 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	count;
	int	i;
	int	tmp;

	count = 0;
	while (count < size)
	{
		i = count + 1;
		while (i <= size)
		{
			if (tab[i] < tab[count])
			{
				tmp = tab[i];
				tab[i] = tab[count];
				tab[count] = tmp;
			}
			i++;
		}
		count++;
	}
}
