/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:32:09 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/08 22:50:47 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destchar;
	char	*srcchar;

	if (dest == 0 && src == 0 && n > 0)
		return (0);
	destchar = (char *)dest;
	srcchar = (char *)src;
	while (n-- > 0)
		*destchar++ = *srcchar++;
	return (dest);
}
