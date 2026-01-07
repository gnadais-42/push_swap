/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:22:02 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/16 18:45:01 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*last;
	char	chars[] = {'a', 'b', 'c', 'd'};

	head = NULL;
	for (int i = 0; i < 4; i++)
		ft_lstadd_front(&head, ft_lstnew(&chars[i]));
	last = ft_lstlast(head);
	ft_putchar_fd(*(char *)head->content, 1); // Should be d
}*/
