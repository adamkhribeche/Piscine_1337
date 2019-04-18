/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 11:57:13 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/22 12:36:19 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int counter;
	int value;

	i = 0;
	j = 0;
	counter = 0;
	while (i < length)
	{
		value = tab[i];
		j = 0;
		while (j < length)
		{
			if (tab[j] == value)
				counter++;
			j++;
		}
		if (counter % 2)
			return (value);
		i++;
	}
	return (0);
}
