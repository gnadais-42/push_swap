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

void	turk(t_list **a, t_list **b)
{
	int target_a;
	int	target_b;

	push_until_len_is_3(a, b);
	sort(a);
	final_cost = INT_MAX;
		
		
	
