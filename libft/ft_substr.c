/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:40:05 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/15 16:37:03 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*null_str(void)
{
	char	*str;

	str = (char *) malloc(1);
	if (!str)
		return (0);
	*str = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_len;
	int		i;

	sub_len = ft_strlen(s);
	if (start >= sub_len)
		return (null_str());
	if (len > sub_len - start)
		len = sub_len - start;
	sub = (char *) malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	i = -1;
	while ((size_t)++i < len)
		sub[i] = s[start + i];
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_substr("hola", 2, 2));
}*/
