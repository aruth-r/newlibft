/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 23:40:27 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/10 00:28:32 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s == c)
		s++;
	if (*s != c && *s != 0)
	{
		i++;
		while (*s != 0)
		{
			if (*s == c && *(s + 1) != c && *(s + 1) != 0)
				i++;
			s++;
		}
	}
	return (i);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s == c)
		s++;
	while (*s != c && *s != 0)
	{
		i++;
		s++;
	}
	return (i);
}

static char	*ft_word(const char *s, char c)
{
	char	*word;

	word = (char *)malloc(ft_wordlen(s, c) * sizeof(char) + 1);
	if (word == 0)
		return (0);
	while (*s == c && *(s + 1) == c)
		s++;
	word = ft_substr(ft_strchr(s, c), 1, ft_wordlen(s, c));
	word[ft_wordlen(s, c)] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	wc;
	size_t	i;

	wc = ft_wordcount(s, c);
	i = 0;
	split = (char **)malloc((wc + 1) * sizeof(char *));
	if (split == 0)
		return (0);
	if(*s == 0 || s == 0)
	{
		split[0] = (char *)calloc(1, sizeof(char));
		if (split[0] == 0)
			return (0);
		return (split);
	}
	while (i < wc)
	{
		if (*s == c)
			split[i] = ft_word(s, c);
		else
			split[i] = ft_substr(s, 0, ft_wordlen(s, c));
		while (*s == c)
			s++;
		s = ft_strchr(s, c);
		i++;
	}
	split[wc] = 0;
	return (split);
}
