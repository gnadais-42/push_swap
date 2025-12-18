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

static int	get_cost(t_list *stack, int len, int *value);
static int	equal_sign_cost(int cost_a, int cost_b);
static int	different_sign_cost(int	cost_a, int len_a, int cost_b, int len_b);
static int	absolute(int n);

int	get_total_cost(t_list *a,int *value_a, t_list *b, int *value_b)
{
	int	cost_a;
	int	cost_b;
	int	len_a;
	int	len_b;

	len_a = list_length(a);
	len_b = list_length(b);
	cost_a = get_cost(a, len_a, value_a);
	cost_b = get_cost(b, len_b, value_b);
	if (cost_a >> 31 == cost_b >> 31)
		return (equal_sign_cost(cost_a, cost_b));
	else
		return (absolute(cost_a) + absolute(cost_b));
}

static int	get_cost(t_list *stack, int len, int *value)
{
	int	index;

	index = get_index(value, stack);
	if (index <= len / 2 - 1)
		return (index);
	else
		return (index - len);
}

static int	equal_sign_cost(int	cost_a, int cost_b)
{
	if (cost_a >= 0)
	{
		if (cost_a > cost_b)
			return (cost_a);
		else
			return (cost_b);
	}
	else
	{
		if (cost_a < cost_b)
			return (absolute(cost_a));
		else
			return (absolute(cost_b));
	}
}

static int	absolute(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}
