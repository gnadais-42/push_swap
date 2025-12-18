/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:10:17 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/10 16:30:09 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

int		list_length(t_list *lst);
int		get_index(void *content, t_list *lst);

void	rotate(t_list **stack);
void	rr(t_list **a, t_list **b);
void	revrotate(t_list **stack);
void	rrr(t_list **a, t_list **b);
void	push(t_list **dst, t_list **src);
void	swap(t_list **stack);
void	ss(t_list **a, t_list **b);

t_list	*parser(int argc, char **args);

#endif
