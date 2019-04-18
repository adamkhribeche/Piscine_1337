/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 13:29:21 by nkhribec          #+#    #+#             */
/*   Updated: 2019/03/05 20:16:31 by nkhribec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "doop.h"

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		opera(ft_atoi(argv[1]), *argv[2], ft_atoi(argv[3]));
		ft_putchar('\n');
	}
	return (0);
}
