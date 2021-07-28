/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:47:52 by tnard             #+#    #+#             */
/*   Updated: 2021/07/28 17:01:51 by tnard            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_list(t_list	*a, t_list	*b)
{
	void	*tmp;

	tmp = a->data;
	b->data = b->data;
	b->data = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*save;
	t_list	*back;

	save = *begin_list;
	back = *begin_list;
	while (*begin_list)
	{	
		(*begin_list) = (*begin_list)->next;
		if (cmp(back->data, (*begin_list)->data) > 0)
		{
			ft_swap_list(&back, &begin_list);
			begin_list = save;
			begin_list = back;
		}
		else
			if (*back)
				(*back) = (*back)->next;
	}
}
/*void	ft_swap_list(t_list	**a, t_list	**b)
{
	void	*tmp;

	tmp = (*a)->data;
	(*a)->data = (*b)->data;
	(*b)->data = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;
	t_list	*curr;
	int		i;

	i = 1;
	if (!(*begin_list) || !(*begin_list)->next)
		return ;
	while (i)
	{
		i = 0;
		tmp = *begin_list;
		curr = tmp->next;
		while (curr)
		{
			if (cmp(tmp->data, curr->data) > 0)
			{
				ft_swap_list(&tmp, &curr);
				i = 1;
			}
			tmp = tmp->next;
			curr = curr->next;
		}
	}
}*/