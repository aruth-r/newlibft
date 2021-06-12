/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:19:47 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/09 22:32:20 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	c;
	size_t	s;

	c = 0;
	if (!dest || !src)
		return (0);
	s = ft_strlen(src);
	if (size == 0)
		return (s);
	while ((*src != 0) && size > (c + 1))
	{
		*dest = *src;
		src++;
		dest++;
		c++;
	}
	if (size > 0)
		*dest = 0;
	return (s);
}
