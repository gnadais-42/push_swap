/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:54:21 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/15 17:59:52 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*trim;

	i = 0;
	len = (int) ft_strlen(s1);
	j = len - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	trim = (char *) malloc(sizeof(char) * (j - i + 2));
	if (!trim)
		return (0);
	ft_strlcpy(trim, &s1[i], (size_t)(j - i + 2));
	return (trim);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
}*/
