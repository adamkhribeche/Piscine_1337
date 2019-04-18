/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:57:52 by nkhribec          #+#    #+#             */
/*   Updated: 2019/03/02 15:24:41 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (*dest)
	{
		dest++;
		i++;
	}
	if (i > 0)
	{
		*dest = '\n';
		dest++;
		i++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest - i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		len;
	char	*final;

	i = 0;
	len = 1;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j++] != '\0')
			len++;
		if (j > 0)
			len++;
	}
	final = malloc(sizeof(*final) * (len));
	i = 1;
	while (i < argc)
	{
		ft_strcat(final, argv[i]);
		i++;
	}
	return (final);
}
