/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 23:33:36 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/23 14:21:41 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		counter;

	counter = 0;
	while (*src != '\0' && counter != size - 1)
	{
		*dest = *src;
		src++;
		dest++;
		counter++;
	}
	while (*src != '\0')
	{
		src++;
		counter++;
	}
	*dest = '\0';
	return (counter);
}
