/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:48:50 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/15 16:38:49 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list	**dst, t_list **src, char stack)
{
	t_list *temp1;
	t_list *temp2;

	if (!*src)
		return ;
	temp1 = *dst;
	temp2 = (*src)->next;
	*dst = *src;
	(*src)->next = temp1;
	*src = temp2;
	ft_printf("p%c\n", stack);
	return ;
}

