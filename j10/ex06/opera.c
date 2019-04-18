/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 13:30:13 by nkhribec          #+#    #+#             */
/*   Updated: 2019/03/05 20:16:45 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	opera(int a, char o, int b)
{
	if (o == '+')
		ft_putnbr(a + b);
	else if (o == '-')
		ft_putnbr(a - b);
	else if (o == '*')
		ft_putnbr(a * b);
	else if (o == '/')
	{
		if (b == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(a / b);
	}
	else if (o == '%')
	{
		if (b == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(a % b);
	}
	else
		ft_putnbr(0);
}
