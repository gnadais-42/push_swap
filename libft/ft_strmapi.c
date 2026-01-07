/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:07:23 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/14 16:21:51 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dup;

	dup = ft_strdup(s);
	if (!dup)
		return (0);
	i = 0;
	while (dup[i])
	{
		dup[i] = f(i, dup[i]);
		i++;
	}
	return (dup);
}
/*
char	tolow(unsigned int i, char c)
{
	return (ft_tolower(c));
}

#include <stdio.h>
int	main(void)
{
	char	(*f)(unsigned int, char);

	f = &tolow;
	printf("%s\n", ft_strmapi("HELLO WORLD", f));
}*/
