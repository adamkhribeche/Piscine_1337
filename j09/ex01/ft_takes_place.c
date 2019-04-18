/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:44:59 by nkhribec          #+#    #+#             */
/*   Updated: 2019/02/21 16:53:49 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_display1(int hour)
{
	printf("%d.00 A.M.", hour);
}

void	ft_display2(int hour)
{
	printf("%d.00 P.M.", hour);
}

void	ft_takes_place(int hour)
{
	if (hour <= 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour == 0)
			ft_display1(12);
		else if (hour < 12)
			ft_display1(hour);
		else if (hour == 12)
			ft_display2(hour);
		else
			ft_display2(hour - 12);
		printf(" AND ");
		if (hour + 1 < 12)
			ft_display1(hour + 1);
		else if (hour + 1 == 12)
			ft_display2(hour + 1);
		else if (hour + 1 > 12 && hour + 1 <= 23)
			ft_display2(hour + 1 - 12);
		else if (hour + 1 == 24)
			ft_display1(hour + 1 - 12);
		printf("\n");
	}
}
