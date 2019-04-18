/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 13:54:27 by nkhribec          #+#    #+#             */
/*   Updated: 2019/03/07 22:48:32 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_wcount(char *str)
{
	int wcount;

	wcount = 0;
	if (*str > 32)
	{
		wcount = 1;
	}
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (*(str + 1) > 32)
				wcount++;
			str++;
		}
		str++;
	}
	return (wcount);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str > 32)
	{
		len++;
		str++;
	}
	return (len);
}

void	ft_wextract(char **ftab, char *str, int wcount)
{
	int i;
	int j;
	int wlen;

	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	i = -1;
	while (++i < wcount)
	{
		wlen = ft_strlen(str);
		ftab[i] = (char*)malloc(sizeof(*str) * (wlen + 1));
		j = 0;
		while (*str > 32)
		{
			ftab[i][j++] = *str;
			str++;
		}
		ftab[i][j] = '\0';
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
	}
	ftab[wcount] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	int		wcount;
	char	**wtab;

	wcount = ft_wcount(str);
	wtab = (char**)malloc(sizeof(char*) * (wcount + 1));
	ft_wextract(wtab, str, wcount);
	return (wtab);
}

nt main(int ac, char **av)
{
	//char **tab;
	//    //int i = -1;
	 printf("%d\n", ft_wcount("    sgdhd shhsg shhsg shhsgd shh df    f       s  4"));
	//            //tab = ft_split("    sgdhd shhsg shhsg shhsgd shh df    f       s  4");
	//                //while (tab[++i])
}
