# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnard <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/16 09:05:23 by tnard             #+#    #+#              #
#    Updated: 2021/07/16 09:05:24 by tnard            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

gcc -c *.c && ar rc libft.a *.o && rm *.oss