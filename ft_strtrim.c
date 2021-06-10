/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:47:31 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/09 23:51:58 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	end;
	size_t	len;
	char	*trim;

	if (*s == 0 )
	{
		trim = (char *)calloc(1, sizeof(char));
		if (trim == 0)
			return (0);
		return (trim);
	}
	while (*s != 0 && (ft_strchr(set, *s)))
		s++;
	end = ft_strlen(s);
	while (end > 0 && (ft_strchr(set, s[end])))
		end--;
	len = end + 1;
	trim = (char *)malloc(sizeof(char) * len);
	if (trim == 0)
		return (0);
	trim = ft_substr(s, 0, len);
	if (trim == 0)
		return (0);
	return (trim);
}
