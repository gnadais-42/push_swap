/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 19:21:44 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/16 20:35:44 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	find_target(int value, t_list *stack);
static int	find_min(t_list *stack);

static int	find_target(int value, t_list *stack)
{
	int	index;
	int	target;
	int	number;
	int	i;

	if (!stack)
		return (0);
	index = find_min(stack);
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

static int	find_min(t_list *stack)
{
	int	i;
	int	min;
	int	index;

	if (!stack)
		return (0);
	i = 0;
	index = 0;
	min = INT_MAX;
	while (stack)
	{
		if (min > *(int *)stack->content)
		{
			min = *(int *)stack->content;
			index = i;
		}
		i++;
		stack = stack->next;
	}
	return (index);
}
