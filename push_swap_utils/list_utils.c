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

int	get_index(void *content, t_list *lst)
{
	int	not_found;
	int	i;

	not_found = -1;
	i = 0;
	while (lst)
	{
		if (content == lst->content)
			return (i);
		i++;
		lst = lst->next;
	}
	return (not_found);
}
