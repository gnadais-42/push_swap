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

int	find_final_targets(t_list *a, t_list *b, int *target_a)
{
	int	curr_target;
	int	final_cost;
	int	curr_cost;

	final_cost = INT_MAX;
	while (b)
	{
		curr_target = find_target(*(int *)b->content, a);
		curr_cost = get_total_cost(a, &curr_target, b, (int *)b->content);
		if (curr_cost < final_cost)
		{
			*target_a = curr_target;
			final_cost = curr_cost;
		}
		b = b->next;
	}
	return (final_cost);
}
