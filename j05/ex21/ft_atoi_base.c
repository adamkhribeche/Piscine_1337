/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adam.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 13:52:57 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/23 14:10:58 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_base_length(char *base)
{
	int	base_length;
	int	j;

	base_length = 0;
	while (base[base_length])
	{
		if (base[base_length] == '-' || base[base_length] == '+')
			return (0);
		j = base_length + 1;
		while (base[j])
		{
			if (base[base_length] == base[j])
				return (0);
			++j;
		}
		++base_length;
	}
	if (base_length < 2)
		return (0);
	return (base_length);
}

int	check_errors(char *str, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0' && str[i] <= 32)
		i++;
	while (str[i])
	{
		j = 0;
		while (base[j] && (str[i] != base[j] ||
					(str[i] == '-' || str[i] == '+')))
			j++;
		if (str[i] != base[j] && str[i] != '-' && str[i] != '+')
			return (0);
		i++;
	}
	if (i == 0)
		return (0);
	return (1);
}

int	get_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	head;
	int	i;
	int	res;
	int	negative;
	int	base_length;

	base_length = get_base_length(base);
	if (!(base_length) || !check_errors(str, base))
		return (0);
	i = 0;
	while (str[i] != '\0' && str[i] <= 32)
		i++;
	head = i;
	i = i - 1;
	res = 0;
	negative = 1;
	while ((str[++i] && (str[i] == '-' || str[i] == '+') && i == head) ||
					(str[i] != '-' && str[i] != '+'))
	{
		if (str[i] == '-')
			negative = -1;
		else if (str[i] != '+')
			res = (res * base_length) + (get_nb(str[i], base));
	}
	return (res * negative);
}
