/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:29:10 by tnard             #+#    #+#             */
/*   Updated: 2021/07/19 16:29:11 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	n;
	int	count;

	count = 0;
	n = 0;
	while (tab[n])
		if (f(tab[n++]) != 0)
			count++;
	return (1);
}
