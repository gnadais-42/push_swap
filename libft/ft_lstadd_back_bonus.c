/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:31:21 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/16 17:38:57 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*temp;

	if (!*lst)
		*lst = new_node;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
}
/*
int	main(void)
{
	t_list	*head;
	char	chars[] = {'a', 'b', 'c', 'd'};

	head = NULL;
	for (int i = 0; i < 4; i++)
		ft_lstadd_back(&head, ft_lstnew(&chars[i]));
	while (head)
	{
		ft_putchar_fd(*(char *)head->content, 1); // should be abdc
		head = head->next;
	}
}*/
