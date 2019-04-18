/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 19:37:39 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/15 09:13:59 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display(int nb)
{
	int a;
	int b;

	if (nb > 9)
	{
		a = nb / 10;
		b = nb % 10;
		ft_putchar(a + 48);
		ft_putchar(b + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int o;

	i = 0;
	while (i <= 99)
	{
		o = i + 1;
		while (o <= 99)
		{
			display(i);
			ft_putchar(' ');
			display(o);
			if (i < 98 || o < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++o;
		}
		++i;
	}
}
