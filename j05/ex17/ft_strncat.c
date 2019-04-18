/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 12:52:49 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/19 12:57:43 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int counter;

	counter = 0;
	while (*dest != '\0')
	{
		dest++;
		counter++;
	}
	while (*src != '\0' && nb != 0)
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
		nb--;
	}
	*dest = '\0';
	return (dest - counter);
}
