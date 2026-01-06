/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 16:39:22 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/15 19:01:24 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*temp;

	if (!*stack || !(*stack)->next)
		return ;
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = NULL;
	ft_lstadd_back(stack, temp);
	return ;
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
}

void	revrotate(t_list **stack)
{
	t_list	*temp1;
	t_list	*temp2;

	if (!*stack || !(*stack)->next)
		return ;
	temp1 = *stack;
	temp2 = NULL;
	while (temp1->next)
	{
		temp2 = temp1;
		temp1 = temp1->next;
	}
	temp2->next = NULL;
	ft_lstadd_front(stack, temp1);
	return ;
}

void	rrr(t_list **a, t_list **b)
{
	revrotate(a);
	revrotate(b);
}
