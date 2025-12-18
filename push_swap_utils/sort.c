/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:19:24 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/18 14:25:21 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_3(t_list **lst);
static void	sort_2(t_list **lst);

void	sort(t_list **lst)
{
	int	length;

	length = list_length(*lst);
	if (length == 3)
		sort_3(lst);
	else if (length == 2)
		sort_2(lst);
}

static void	sort_2(t_list **lst)
{
	if (*(int *)(*lst)->content > *(int *)((*lst)->next)->content)
		call_rule(lst, NULL, "ra");
}

static void	sort_3(t_list **lst)
{
	int	a;
	int	b;
	int	c;

	a = *(int *)(*lst)->content;
	b = *(int *)((*lst)->next)->content;
	c = *(int *)(((*lst)->next)->next)->content;
	if (a < c && c < b)
	{
		call_rule(lst, NULL, "sa");
		call_rule(lst, NULL, "ra");
	}
	else if (b < a && a < c)
		call_rule(lst, NULL, "sa");
	else if (b < c && c < a)
		call_rule(lst, NULL, "ra");
	else if (c < a && a < b)
		call_rule(lst, NULL, "rra");
	else if (c < b && b < a)
	{
		call_rule(lst, NULL, "rra");
		call_rule(lst, NULL, "sa");
	}
}
