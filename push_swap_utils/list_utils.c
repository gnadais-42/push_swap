/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 19:09:22 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/16 19:21:29 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	list_length(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		len += 1;
		lst = lst->next;
	}
	return (len);
}

int	get_index(int content, t_list *lst)
{
	int	not_found;
	int	i;

	not_found = -1;
	i = 0;
	while (lst)
	{
		if (content == *(int *)lst->content)
			return (i);
		i++;
		lst = lst->next;
	}
	return (not_found);
}

int	get_min_int(t_list *lst)
{
	int	i;
	int	min;
	int	index;

	if (!lst)
		return (0);
	i = 0;
	index = 0;
	min = INT_MAX;
	while (lst)
	{
		if (min > *(int *)lst->content)
		{
			min = *(int *)lst->content;
			index = i;
		}
		i++;
		lst = lst->next;
	}
	return (index);
}

int	value_at_index(int index, t_list *lst)
{
	int	value;

	value = 0;
	while (index-- > 0 && lst)
		lst = lst->next;
	if (lst)
		value = *(int *)lst->content;
	return (value);
}

