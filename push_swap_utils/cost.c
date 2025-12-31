/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 00:53:27 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/17 01:30:45 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_total_cost(t_list *a, int *value_a, t_list *b, int *value_b)
{
	int	both_rot_cost;
	int	both_revrot_cost;
	int	diff_rot_cost;
	int	index_a;
	int	index_b;

	index_a = get_index(*value_a, a);
	index_b = get_index(*value_b, b);
	both_rot_cost = rot_cost(index_a, index_b);
	both_revrot_cost = revrot_cost(a, b, index_a, index_b);
	diff_rot_cost = diff_cost(a, b, index_a, index_b);
	if (both_rot_cost <= both_revrot_cost && both_rot_cost <= diff_rot_cost)
		return (both_rot_cost);
	else if (both_revrot_cost <= both_rot_cost && both_revrot_cost <= diff_rot_cost)
		return (both_revrot_cost);
	else
		return (diff_rot_cost);
}

int	revrot_cost(t_list *a, t_list *b, int index_a, int index_b)
{
	int	len_a;
	int	len_b;
	int	rev_index_a;
	int	rev_index_b;

	len_a = list_length(a);
	len_b = list_length(b);
	rev_index_a = len_a - index_a;
	rev_index_b = len_b - index_b;
	if (rev_index_a < rev_index_b)
		return (rev_index_b);
	else
		return (rev_index_a);
}

int	rot_cost(int index_a, int index_b)
{
	if (index_a < index_b)
		return (index_b);
	else
		return (index_a);
}

int	diff_cost(t_list *a, t_list *b, int index_a, int index_b)
{
	int	len_a;
	int	len_b;
	int	rev_index_a;
	int	rev_index_b;

	len_a = list_length(a);
	len_b = list_length(b);
	rev_index_a = len_a - index_a;
	rev_index_b = len_b - index_b;
	if (index_a + rev_index_b < index_b + rev_index_a)
		return (index_a + rev_index_b);
	else
		return (index_b + rev_index_a);
}
