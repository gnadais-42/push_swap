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

# include "libft/libft.h"

int		list_length(t_list *lst);
int		get_index(int content, t_list *lst);
int		get_min_int(t_list *lst);
int		find_target(int value, t_list *stack);
int		value_at_index(int index, t_list *lst);

int	get_total_cost(t_list *a, int *value_a, t_list *b, int *value_b);
int	rot_cost(int index_a, int index_b);
int	revrot_cost(t_list *a, t_list *b, int index_a, int index_b);
int	diff_cost(t_list *a, t_list *b, int index_a, int index_b);

void	rotate(t_list **stack);
void	rr(t_list **a, t_list **b);
void	revrotate(t_list **stack);
void	rrr(t_list **a, t_list **b);
void	push(t_list **dst, t_list **src);
void	swap(t_list **stack);
void	ss(t_list **a, t_list **b);
void	call_rule(t_list **a, t_list **b, char *rule);

void	push_until_len_is_3(t_list **a, t_list **b);
void	sort(t_list **lst);
void	find_final_targets(t_list *a, t_list *b, int *target_a, int *target_b);
void	last_rotations(t_list **a);
void	turk(t_list **a, t_list **b);

t_list	*parser(int argc, char **args);
int		validator(char *argument, t_list *lst);

#endif
