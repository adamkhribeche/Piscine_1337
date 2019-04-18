/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 00:25:57 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/19 11:39:11 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_letter_number(char c)
{
	if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	char *head;

	head = str;
	while (*str)
	{
		if ((*str >= 'A') && (*str <= 'Z'))
			*str += 32;
		str++;
	}
	str = head;
	return (str);
}

int		ft_is_letter_min(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char *first;

	first = str;
	str = ft_strlowcase(str);
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
	str++;
	while (*str != '\0')
	{
		if (!ft_is_letter_number(*(str - 1)))
		{
			if (ft_is_letter_min(*str))
			{
				*str = *str - 32;
			}
		}
		str++;
	}
	str = first;
	return (str);
}
