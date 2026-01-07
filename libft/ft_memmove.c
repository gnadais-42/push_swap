/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:14:56 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/20 15:20:07 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ddest;
	const unsigned char	*ssrc;

	if (!dest && !src)
		return (0);
	i = n;
	ddest = (unsigned char *) dest;
	ssrc = (const unsigned char *) src;
	if (ddest < ssrc)
	{
		while (i-- > 0)
			ddest[n - i - 1] = ssrc[n - i - 1];
	}
	else
	{
		while (i-- > 0)
			ddest[i] = ssrc[i];
	}
	return (dest);
}
