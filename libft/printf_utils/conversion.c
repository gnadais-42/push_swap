/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:28:57 by gnadais-          #+#    #+#             */
/*   Updated: 2025/11/23 19:59:13 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	conversion(char sign, va_list args)
{
	int	count;

	count = 0;
	if (sign == '%')
		count += ft_putchar_count('%');
	else if (sign == 'c')
		count += ft_putchar_count(va_arg(args, int));
	else if (sign == 's')
		count += ft_putstr_count(va_arg(args, char *));
	else if (sign == 'd' || sign == 'i')
		count += ft_putnbr_count(va_arg(args, int));
	else if (sign == 'x' || sign == 'X')
		count += ft_puthex_count(va_arg(args, unsigned int), sign);
	else if (sign == 'u')
		count += ft_putunbr_count(va_arg(args, unsigned int));
	else if (sign == 'p')
		count += ft_putptr_count(va_arg(args, void *));
	return (count);
}
