/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 18:21:09 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/18 20:25:50 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compare(char *str, char *to_find)
{
	while (*to_find != '\0')
	{
		if (*to_find != *str)
			return (0);
		to_find++;
		str++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (ft_compare(str, to_find) == 1)
			return (str);
		str++;
	}
	return (0);
}
