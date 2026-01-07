/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:05:43 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/16 15:29:54 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
int main(void)
{
	t_list  *head;
	char	chars[] = {'a', 'b', 'c', 'd'};

	head = NULL;
	ft_putnbr_fd(ft_lstsize(head), 1); // Should be zero
	ft_putchar_fd('\n', 1);

	ft_lstadd_front(&head, ft_lstnew(&chars[0]));
	ft_putnbr_fd(ft_lstsize(head), 1); // Should be 1
	ft_putchar_fd('\n', 1);

	for (int i = 1; i < 4; i++)
		ft_lstadd_front(&head, ft_lstnew(&chars[i]));
	ft_putnbr_fd(ft_lstsize(head), 1); // Should be 4
	ft_putchar_fd('\n', 1);
}*/
