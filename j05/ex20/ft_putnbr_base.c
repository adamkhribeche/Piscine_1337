/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:43:11 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/20 13:16:45 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

int		ft_unique_str(char *str)
{
	int counter;

	counter = 1;
	while (*str != '\0')
	{
		while (*(str + counter) != '\0')
		{
			if (*str == *(str + counter))
				return (0);
			counter++;
		}
		str++;
		counter = 1;
	}
	return (1);
}

int		ft_is_alpha_num(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 32 && *str <= 126) && *str != '-' && *str != '+'))
			return (0);
		str++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_strlen(base) <= 1 || ft_is_alpha_num(base) == 0 ||
			ft_unique_str(base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= ft_strlen(base))
	{
		ft_putnbr_base(nbr / ft_strlen(base), base);
		ft_putnbr_base(nbr % ft_strlen(base), base);
	}
	else
		ft_putchar(base[nbr]);
}
