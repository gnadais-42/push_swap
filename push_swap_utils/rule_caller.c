/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_caller.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:36:39 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/18 15:12:46 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_strcmp(char *str1, char *str2);
static void	call_rule2_norminettecringe(t_list **a, t_list **b, char *rule);
static void	call_rule3_norminettecringe(t_list **a, t_list **b, char *rule);

void	call_rule(t_list **a, t_list **b, char *rule)
{
	if (!ft_strcmp(rule, "sa"))
	{
		swap(a);
		ft_printf("sa\n");
	}
	else if (!ft_strcmp(rule, "sb"))
	{
		swap(b);
		ft_printf("sb\n");
	}
	else if (!ft_strcmp(rule, "ss"))
	{
		ss(a, b);
		ft_printf("ss\n");
	}
	else if (!ft_strcmp(rule, "pa"))
	{
		push(a, b);
		ft_printf("pa\n");
	}
	else
		call_rule2_norminettecringe(a, b, rule);
}

static void	call_rule2_norminettecringe(t_list **a, t_list **b, char *rule)
{
	if (!ft_strcmp(rule, "pb"))
	{
		push(b, a);
		ft_printf("pb\n");
	}
	else if (!ft_strcmp(rule, "ra"))
	{
		rotate(a);
		ft_printf("ra\n");
	}
	else if (!ft_strcmp(rule, "rb"))
	{
		rotate(b);
		ft_printf("rb\n");
	}
	else if (!ft_strcmp(rule, "rr"))
	{
		rr(a, b);
		ft_printf("rr\n");
	}
	else
		call_rule3_norminettecringe(a, b, rule);
}

static void	call_rule3_norminettecringe(t_list **a, t_list **b, char *rule)
{
	if (!ft_strcmp(rule, "rra"))
	{
		revrotate(a);
		ft_printf("rra\n");
	}
	else if (!ft_strcmp(rule, "rrb"))
	{
		revrotate(b);
		ft_printf("rrb\n");
	}
	else if (!ft_strcmp(rule, "rrr"))
	{
		rrr(a, b);
		ft_printf("rrr\n");
	}
	else
	{
		ft_printf("Rule not found, exiting program");
		exit(1);
	}
}

static int	ft_strcmp(char *str1, char *str2)
{
	if (!str1 && !str2)
		return (0);
	if (!str1)
		return (0 - *str2);
	if (!str2)
		return (*str1);
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
