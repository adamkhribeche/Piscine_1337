# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkhribec <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/21 18:47:58 by nkhribec          #+#    #+#              #
#    Updated: 2019/02/21 19:58:27 by nkhribec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
touch -A '-000001' bomb.txt && stat -r bomb.txt | cut -d ' ' -f9