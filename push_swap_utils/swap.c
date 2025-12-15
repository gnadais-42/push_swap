/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 00:13:57 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/15 01:33:22 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **stack)
{
	t_list	*temp1;
	t_list	*temp2;

	if (!(*stack) || !((*stack)->next))
		return ;
	temp1 = *stack;
	temp2 = temp1->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
	*stack = temp2;
	return ;
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	return ;
}
