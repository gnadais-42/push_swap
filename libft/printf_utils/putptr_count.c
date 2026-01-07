/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 08:27:24 by gnadais-          #+#    #+#             */
/*   Updated: 2025/11/25 08:36:23 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	puthex(unsigned long nbr);

int	ft_putptr_count(void *ptr)
{
	int				count;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = 2;
	write(1, "0x", 2);
	count += puthex((unsigned long) ptr);
	return (count);
}

static int	puthex(unsigned long nbr)
{
	int		count;
	char	c;

	count = 1;
	if (nbr >= 16)
		count += puthex(nbr / 16);
	if (nbr % 16 > 9)
		c = (nbr % 16 - 10) + 'a';
	else
		c = nbr % 16 + '0';
	write(1, &c, 1);
	return (count);
}
