/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:50:38 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/11 00:32:05 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	exit_program();
static int	validator(char *argument, t_lsit *args);
static int	is_repetition(int number, t_list *args);

t_list	parser(int arglen, char *args[])
{	
	t_list	*parsed;
	t_list	*node;
	int		*content;

	parsed = NULL;
	if (arglen == 2)
		args = ft_split(*(++args), ' ');
	while (*args)
	{
		if (!validator(*args, parsed))
			exit_program();
		content = malloc(sizeof(int));
		if (!content)
		{
			ft_lstclear(&parsed, del);
			exit_program();
		}
		*content = ft_atoi(*args);
		node = ft_lstnew(content);
		if (!node)
		{
			ft_lstclear(&parsed, del);
			exit_program();
		}
		ft_lstadd_back(&parsed, node);
		args++;
	}
	return (parsed);
}

static void exit_program(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

static int	validator(char *argument, t_list *llist)
{
	int	number;

	if (!argument || !*argument)
		return (0);
	number = ft_atoi(argument);
	while (*argument)
	{
		if (!ft_isdigit(*argument++))
			return (0);
	}
	if (is_repetition(number, llist))
		return (0);
	return (1);
}

static int	is_repetition(int number, t_list *llist)
{
	while (llist)
	{
		if (llist->content && *(int *)llist->content == number)
			return (1);
		llist = llist->next;
	}
	return (0);
}
