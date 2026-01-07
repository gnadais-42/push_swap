/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 06:34:07 by gnadais-          #+#    #+#             */
/*   Updated: 2025/11/25 06:45:10 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnbr_count(int nbr)
{
	char	digit;
	long	number;
	int		count;

	number = (long) nbr;
	count = 1;
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
		count = 2;
	}
	if (number >= 10)
	{
		digit = number % 10 + '0';
		count += ft_putnbr_count(number / 10);
	}
	else
		digit = number + '0';
	write(1, &digit, 1);
	return (count);
}

int	ft_putunbr_count(unsigned int nbr)
{
	char	digit;
	int		count;

	count = 1;
	if (nbr >= 10)
	{
		digit = (nbr % 10) + '0';
		count += ft_putunbr_count(nbr / 10);
	}
	else
		digit = nbr + '0';
	write(1, &digit, 1);
	return (count);
}
