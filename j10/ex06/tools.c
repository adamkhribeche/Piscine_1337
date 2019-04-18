/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 13:28:59 by nkhribec          #+#    #+#             */
/*   Updated: 2019/03/05 20:17:02 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"
#include <unistd.h>

int		ft_atoi(char *str)
{
	int		result;
	int		i;
	int		count;

	i = 0;
	count = 1;
	result = 0;
	while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9')
				|| (i == 0 && (str[i] == '-' || str[i] == '+'))))
	{
		if (str[i] == '-' || str[i] == '+')
		{
			i++;
			continue ;
		}
		result = result * count + str[i] - '0';
		count = 10;
		i++;
	}
	if (str[0] == '-')
	{
		result *= -1;
	}
	return (result);
}

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

void	ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}
