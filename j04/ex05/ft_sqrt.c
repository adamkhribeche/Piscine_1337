/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 16:22:31 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/17 22:42:19 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int result;

	result = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (result <= nb)
		{
			if (result * result == nb)
				return (result);
			result++;
		}
		return (0);
	}
}
