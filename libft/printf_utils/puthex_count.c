/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 20:01:18 by gnadais-          #+#    #+#             */
/*   Updated: 2025/11/23 20:15:14 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_puthex_count(unsigned int nbr, char x)
{
	char	c;
	char	format;
	int		count;

	count = 1;
	if (x == 'x')
		format = 'a';
	else
		format = 'A';
	if (nbr >= 16)
		count += ft_puthex_count(nbr / 16, x);
	if (nbr % 16 > 9)
		c = (nbr % 16 - 10) + format;
	else
		c = nbr % 16 + '0';
	ft_putchar_fd(c, 1);
	return (count);
}
