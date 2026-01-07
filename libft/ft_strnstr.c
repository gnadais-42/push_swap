/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:30:33 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/10 17:52:58 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	int		found;

	i = 0;
	if (!*little)
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		found = 1;
		while (big[i + j] && little[j] && i + j < len)
		{
			if (big[i + j] != little[j])
			{
				found = 0;
				break ;
			}
			j++;
		}
		if (found && !little[j])
			return ((char *) &big[i]);
		i++;
	}
	return (0);
}
