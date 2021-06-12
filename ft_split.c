/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 03:04:08 by phemsi-a          #+#    #+#             */
/*   Updated: 2021/06/12 00:11:33 by aruth-ra         ###   ########.fr       */
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

static char		**free_tab(char **tab)
{
	while (*tab)
	{
		free(*tab);
		tab++;
	}
	free(tab);
	return (0);
}

char			**ft_split(char const *s, char c)
{
	char		**split;
	size_t		word;
	size_t		words_count;
	size_t		i;
	size_t		j;

	words_count = ft_wordcount(s, c);
	split = (char **)malloc((words_count + 1) * sizeof(char*));
	if (split == 0 || s == 0)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			word = ft_wordlen(&s[i], c);
			if (!(split[j] = ft_substr(s, i, word)))
				return (free_tab(split));
			j++;
			i += word - 1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}