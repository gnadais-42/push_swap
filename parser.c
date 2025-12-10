/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:50:38 by gnadais-          #+#    #+#             */
/*   Updated: 2025/12/10 17:15:33 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	exit_program();
static int	validator(char *argument, t_lsit *args);
static int	is_repetition(int number, t_list *args);

t_list	parser(int arglen, char *args[])
{	
	t_list	parsed;
	int		i;

	i = 0;

}

static void exit_program(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

static int	validator(char *argument, t_list *args)
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
	if (is_repetition(number, args))
		return (0);
	return (1);
}

static int	is_repetition(int number, t_list *args)
{
	while (args)
	{
		if (args->content && *(int *)args->content == number)
			return (1);
		args = args->next;
	}
	return (0);
}
