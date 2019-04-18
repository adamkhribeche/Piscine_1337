/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 20:02:56 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/21 20:43:49 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'q')
				str[i] = str[i] - 16;
			else
				str[i] = str[i] + 10;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'Q')
				str[i] = str[i] - 16;
			else
				str[i] = str[i] + 10;
		}
		i++;
	}
	return (str);
}
