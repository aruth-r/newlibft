/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:24:48 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/19 18:05:09 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		src_len;

	src_len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (src_len + 1));
	if (dest == 0)
		return (0);
	else
		ft_strlcpy(dest, s, src_len + 1);
	return (dest);
}
