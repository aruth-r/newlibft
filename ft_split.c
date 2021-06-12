/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 01:57:04 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/12 01:57:26 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;

	if (s == 0)
		return (0);
	i = 0;
	while (*s != 0)
	{
		while (*s == c && *s != 0)
			s++;
		if (*s != c && *s != 0)
		{
			i++;
			while (*s != c && *s != 0)
				s++;
		}
	}
	return (i);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != c && *s != 0)
	{
		i++;
		s++;
	}
	return (i);
}

static char	**free_tab(char **tab)
{
	while (*tab)
	{
		free(*tab);
		tab++;
	}
	free(tab);
	return (0);
}

static char	**ft_allocate(char **split, const char *s, char c, size_t wc)
{
	size_t		wordlen;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i] != 0 && j < wc)
	{
		if (s[i] != c)
		{
			wordlen = ft_wordlen(&s[i], c);
			split[j] = ft_substr(s, i, wordlen);
			if (!split[j])
				return (free_tab(split));
			j++;
			i += wordlen - 1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	size_t		words_count;

	words_count = ft_wordcount(s, c);
	split = (char **)malloc((words_count + 1) * sizeof(char *));
	if (split == 0 || s == 0)
		return (0);
	return (ft_allocate(split, s, c, words_count));
}
