/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 23:23:07 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/18 23:29:15 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		if (((*str) >= 'a') && ((*str) <= 'z'))
		{
			(*str) = (*str) - 32;
		}
		str++;
		counter++;
	}
	return (str - counter);
}
