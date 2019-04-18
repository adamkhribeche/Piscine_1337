/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 16:26:30 by nkhribec          #+#    #+#             */
/*   Updated: 2019/03/04 12:29:40 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while (*(str++))
		ft_putchar(*(str - 1));
}

void	putnbr(int nb)
{
	char ch;

	if (nb < 10)
	{
		ch = nb + '0';
		ft_putchar(ch);
	}
	else
	{
		putnbr(nb / 10);
		ch = nb % 10 + '0';
		ft_putchar(ch);
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str != 0)
	{
		j = 0;
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		putnbr(par[i].size_param);
		ft_putstr("\n");
		while (par[i].tab[j] != 0)
		{
			ft_putstr(par[i].tab[j]);
			ft_putstr("\n");
			j++;
		}
		i++;
	}
}
