/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:21:31 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/18 16:32:36 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_until_len_is_3(t_list **a, t_list **b)
{
	int	i;
	int	len_a;

	len_a = list_length(*a);
	if (len_a <= 3)
		return ;
	i = 0;
	while (i++ < len_a - 3)
		call_rule(a, b, "pb");
	return ;
}

int	find_target(int value, t_list *stack)
{
	int	index;
	int	target;
	int	number;
	int	i;

	if (!stack)
		return (0);
	index = get_min_int(stack);
	target = INT_MAX;
	i = 0;
	while (stack)
	{
		number = *(int *)stack->content;
		if (number > value && number < target)
		{
			target = number;
			index = i;
		}
		i++;
		stack = stack->next;
	}
	return (index);
}

void	find_final_targets(t_list *a, t_list *b, int *target_a, int *target_b)
{
	int		curr_target;
	int		curr_value;
	int		final_cost;
	int		curr_cost;
	t_list	*b_copy;

	b_copy = b;
	final_cost = INT_MAX;
	while (b)
	{
		curr_target = find_target(*(int *)b->content, a);
		curr_value = value_at_index(curr_target, a);
		curr_cost = get_total_cost(a, &curr_value, b_copy, (int *)b->content);
		if (curr_cost < final_cost)
		{
			*target_a = curr_value;
			*target_b = *(int *)b->content;
			final_cost = curr_cost;
		}
		b = b->next;
	}
}

void	last_rotations(t_list **a)
{
	int	min;
	int	len;
	int	rev;

	min = get_min_int(*a);
	len = list_length(*a);
	rev = len - min;
	if (min < rev)
	{
		while (min-- > 0)
			call_rule(a, NULL, "ra");
	}
	else
	{
		while (rev-- > 0)
			call_rule(a, NULL, "rra");
	}
}
