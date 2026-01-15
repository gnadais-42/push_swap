/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:01:41 by gnadais-          #+#    #+#             */
/*   Updated: 2026/01/15 13:02:15 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_list *a)
{
	int	previous;

	previous = INT_MIN;
	while (a)
	{
		if (*(int *)a->content < previous)
			return (0);
		previous = *(int *)a->content;
		a = a->next;
	}
	return (1);
}
