/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:28:10 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/16 15:34:11 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new_node)
{
	new_node->next = *lst;
	*lst = new_node;
}
/*
int	main(void)
{
	t_list	*head;

	head = NULL;
	char chars[] = {'a', 'b', 'c', 'd'};
	for (int i = 0; i < 4; i++)
    	ft_lstadd_front(&head, ft_lstnew(&chars[i]));
	while (head)
	{
		ft_putchar_fd(*(char *)(head->content), 1);
		head = head->next;
	}
}*/
