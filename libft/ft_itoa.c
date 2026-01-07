/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:01:48 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/15 17:41:29 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*number;
	long	ln;

	ln = (long) n;
	len = num_len(n);
	number = (char *) malloc(sizeof(char) * (len + 1));
	if (!number)
		return (0);
	number[len] = '\0';
	if (n == 0)
		number[0] = '0';
	if (n < 0)
	{
		number[0] = '-';
		ln = -ln;
	}
	while (ln)
	{
		number[--len] = ln % 10 + '0';
		ln /= 10;
	}
	return (number);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	(void) argc;
	printf("%s", ft_itoa(ft_atoi(argv[1])));
}*/
