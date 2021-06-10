/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:38:05 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/20 11:45:43 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c1;

	str = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n-- > 0)
	{
		if (*str == c1)
			return ((void *)str);
		str++;
	}
	return (0);
}
