/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:44:04 by gnadais-          #+#    #+#             */
/*   Updated: 2025/10/15 15:35:17 by gnadais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static int	word_len(char const *word, char c)
{
	int		len;

	len = 0;
	while (*word && *word++ != c)
		len++;
	return (len);
}

static char	*word_dup(char const *word, size_t word_len)
{
	char	*worddup;

	worddup = (char *) malloc(sizeof(char) * (word_len + 1));
	if (!worddup)
		return (0);
	ft_memcpy(worddup, word, word_len);
	worddup[word_len] = '\0';
	return (worddup);
}

static char	**free_words(char **words, int count)
{
	while (--count >= 0)
		free(words[count]);
	free(words);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word_count;
	int		len;
	char	**splitstr;

	word_count = count_words(s, c);
	splitstr = (char **) malloc(sizeof(char *) * (word_count + 1));
	if (!splitstr)
		return (0);
	i = -1;
	while (++i < word_count)
	{
		while (*s == c)
			s++;
		len = word_len(s, c);
		splitstr[i] = word_dup(s, len);
		if (!splitstr[i])
			return (free_words(splitstr, i));
		s += len;
	}
	splitstr[word_count] = 0;
	return (splitstr);
}
