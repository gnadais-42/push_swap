/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:55:03 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/15 15:50:04 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last_match;

	last_match = 0;
	while (*s)
	{
		if ((unsigned char) *s == (unsigned char) c)
			last_match = (char *) s;
		s++;
	}
	if ((unsigned char) c == '\0')
		return ((char *) s);
	return (last_match);
}
