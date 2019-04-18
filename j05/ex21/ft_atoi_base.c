/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoibase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 23:05:03 by nkhribec          #+#    #+#             */
/*   Updated: 2019/04/18 04:19:21 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_in_base(char c, int base)
{
	if (base < 10)
		return (c <= '9' && c >= '0');
	else
		return ((c <= '9' && c >= '0') || (c >= 'a' && c <= 'z') 
				|| (c >= 'A' && c <= 'Z'));
}


int ft_atoi_base(char *str, int base)
{
	int result = 0;
	int signe = 1;

	while (*str <= 32 && *str)
		str++;
	if (*str == '-')
	{
		signe = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && base >= 2 && base <= 16 && ft_in_base(*str, base))
	{
		if (*str <= '9' && *str >= '0')
		{
			result = result * base + (*str - '0');
		}
		else if ((*str <= '9' && *str >= '0') || (*str >= 'a' && *str <= 'z'))
		{
			result = result * base + (*str - 'a' + 10);
		}			
		else if ((*str <= '9' && *str >= '0') || (*str >= 'A' && *str <= 'Z'))
		{
			result = result * base + (*str - 'A' + 10);
		}			
		str++;
	}
	return (result * signe);
}
