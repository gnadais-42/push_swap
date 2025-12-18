/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:50:38 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/12 01:58:39 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	exit_program(int argc, char **args, t_list **parsed);
static int	validator(char *argument, t_list *args);
static int	is_repetition(int number, t_list *args);
static t_list *create_list(int argc, char **args);

t_list	*parser(int argc, char **args)
{	
	t_list	*parsed;
	int	i;

	i = 0;
	if (argc == 2)
		args = ft_split(*(++args), ' ');
	else
		args++;
	parsed = create_list(argc, args);
	if (argc == 2)
	{
		while (args[i])
			free(args[i++]);
		free(args);
	}
	return (parsed);
}

static t_list *create_list(int argc, char **args)
{
	t_list	*parsed;
	t_list	*node;
	int		*content;
	int		i;

	i = 0;
	parsed = NULL;
	while (args[i])
	{
		if (!validator(args[i], parsed))
			exit_program(argc, args, &parsed);
		content = malloc(sizeof(int));
		if (!content)
			exit_program(argc, args, &parsed);
		*content = ft_atoi(args[i++]);
		node = ft_lstnew(content);
		if (!node)
		{
			free(content);
			exit_program(argc, args, &parsed);
		}
		ft_lstadd_back(&parsed, node);
	}
	return (parsed);
}

static void exit_program(int argc, char **args, t_list **parsed)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (args[i])
			free(args[i++]);
		free(args);
	}
	ft_lstclear(parsed, free);
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
