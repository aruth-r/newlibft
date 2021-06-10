/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:13:52 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/03 23:41:42 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cat;
	size_t	len;

	cat = 0;
	len = 0;
	while (dst[len] != 0 && len < dstsize)
		len++;
	cat = len;
	if (dstsize == 0)
		return (cat + ft_strlen(src));
	while (src[len - cat] != 0 && len < dstsize - 1)
	{
		dst[len] = src[len - cat];
		len++;
	}
	if (cat < dstsize)
		dst[len] = 0;
	return (cat + ft_strlen(src));
}
