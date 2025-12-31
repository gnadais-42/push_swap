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

static void     call_sort(t_list **a, t_list **b, int target_a, int target_b);
static void     both_revrot(t_list **a, t_list **b, int index_a, int index_b);
static void     both_rot(t_list **a, t_list **b, int index_a, int index_b);
static void     diff_rot(t_list **a, t_list **b, int index_a, int index_b);
void	print_lists(t_list *a, t_list *b);

void	turk(t_list **a, t_list **b)
{
	int	target_a;
	int	target_b;

	push_until_len_is_3(a, b);
	sort(a);
	while (*b)
	{
		//print_lists(*a, *b);
		find_final_targets(*a, *b, &target_a, &target_b);
		call_sort(a, b, target_a, target_b);
		//print_lists(*a, *b);
		call_rule(a, b, "pa");
	}
}

static void	call_sort(t_list **a, t_list **b, int target_a, int target_b)
{
	int	index_a;
	int	index_b;
	int	both_rot_cost;
	int	both_revrot_cost;
	int	diff_rot_cost;

	index_a = get_index(target_a, *a);
	index_b = get_index(target_b, *b);
	both_rot_cost = rot_cost(index_a, index_b);
	both_revrot_cost = revrot_cost(*a, *b, index_a, index_b);
	diff_rot_cost = diff_cost(*a, *b, index_a, index_b);
	if (both_rot_cost <= both_revrot_cost && both_rot_cost <= diff_rot_cost)
		both_rot(a, b, index_a, index_b);
	else if (both_revrot_cost <= both_rot_cost && both_revrot_cost <= diff_rot_cost)
		both_revrot(a, b, index_a, index_b);
	else
		diff_rot(a, b, index_a, index_b);
}

static void	both_rot(t_list **a, t_list **b, int index_a, int index_b)
{
	int	i;

	i = 0;
	if (index_a > index_b)
	{
		while (i++ < index_b)
			call_rule(a, b, "rr");
		while (i++ < index_a + 1)
			call_rule(a, b, "ra");
	}
	else
	{
		while (i++ < index_a)
			call_rule(a, b, "rr");
		while (i++ < index_b + 1)
			call_rule(a, b, "rb");
	}
}

static void	both_revrot(t_list **a, t_list **b, int index_a, int index_b)
{
	int	rev_index_a;
	int	rev_index_b;
	int	i;

	rev_index_a = list_length(*a) - index_a;
	rev_index_b = list_length(*b) - index_b;
	i = 0;
	if (rev_index_a > rev_index_b)
	{
		while (i++ < rev_index_b)
			call_rule(a, b, "rrr");
		while (i++ < rev_index_a + 1)
			call_rule(a, b, "rra");
	}
	else
	{
		while (i++ < rev_index_a)
			call_rule(a, b, "rrr");
		while (i++ < rev_index_b + 1)
			call_rule(a, b, "rrb");
	}
}

static void	diff_rot(t_list **a, t_list **b, int index_a, int index_b)
{
	int	len_a;
	int	len_b;

	len_a = list_length(*a);
	len_b = list_length(*b);
	if (index_a + len_b - index_b < index_b + len_a - index_a)
	{
		while (index_a-- > 0)
			call_rule(a, b, "ra");
		while (index_b++ < len_b)
			call_rule(a, b, "rrb");
	}
	else
	{
		while (index_b-- > 0)
			call_rule(a, b, "rb");
		while (index_a++ < len_a)
			call_rule(a, b, "rra");
	}
}

void	print_lists(t_list *a, t_list *b)
{
	ft_printf("a | b\n");
	while (a || b)
	{
		if (a && b)
		{
			ft_printf("%i | %i\n", *(int *)a->content, *(int *)b->content);
			a = a->next;
			b = b->next;
		}
		else if (a)
		{
			ft_printf("%i | null\n", *(int *)a->content);
			a = a->next;
		}
		else
		{
			ft_printf("null | %i\n", *(int *)b->content);
			b = b->next;
		}
	}
}
