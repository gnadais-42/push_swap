/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:52:02 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/10 17:06:13 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*dupcpy;

	dup = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dup)
		return (0);
	dupcpy = dup;
	while (*s)
		*dup++ = *s++;
	*dup = '\0';
	return (dupcpy);
}
