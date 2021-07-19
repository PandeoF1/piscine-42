/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 08:46:58 by tnard             #+#    #+#             */
/*   Updated: 2021/07/08 08:51:19 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (str[n] >= 65 && str[n] <= 90)
			str[n] += 32;
		n++;
	}
	return (str);
}
