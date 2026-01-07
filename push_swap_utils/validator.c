/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:20:04 by gnadais-          #+#    #+#             */
/*   Updated: 2026/01/06 17:48:57 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_repetition(int number, t_list *lst);
static int	overflow(char *number, char sign);
static int	valid_chars(char *number);
static void	skip_leading_zeros(char **number);

int	validator(char *argument, t_list *lst)
{
	int		number;
	char	sign;

	if (!argument || !*argument)
		return (0);
	number = ft_atoi(argument);
	if (*argument == '-' && *(argument + 1))
	{
		argument++;
		sign = '-';
	}
	else
	{
		if (*argument == '+' && *(argument + 1))
			argument++;
		sign = '+';
	}
	if (!valid_chars(argument))
		return (0);
	if (overflow(argument, sign))
		return (0);
	if (is_repetition(number, lst))
		return (0);
	return (1);
}

static int	is_repetition(int number, t_list *lst)
{
	while (lst)
	{
		if (lst->content && *(int *)lst->content == number)
			return (1);
		lst = lst->next;
	}
	return (0);
}

static int	overflow(char *number, char sign)
{
	int	len;

	skip_leading_zeros(&number);
	len = ft_strlen(number);
	if (len > 10)
		return (1);
	else if (len == 10)
	{
		if (sign == '-' && ft_strncmp(number, "2147483648", 11) > 0)
			return (1);
		else if (sign == '+' && ft_strncmp(number, "2147483647", 11) > 0)
			return (1);
	}
	return (0);
}

static int	valid_chars(char *number)
{
	while (*number)
	{
		if (!ft_isdigit(*number++))
			return (0);
	}
	return (1);
}

static void	skip_leading_zeros(char **number)
{
	while (**number == '0')
		(*number)++;
	if (!**number)
		(*number)--;
	return ;
}
