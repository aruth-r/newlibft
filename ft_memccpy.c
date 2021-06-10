/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:14:37 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/06 19:59:52 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*destchar;
	const char	*srcchar;
	char		stop;
	size_t		i;

	i = 0;
	destchar = (char *)dest;
	srcchar = (const char *)src;
	stop = (char)c;
	while (i < n && srcchar[i] != stop)
	{
		destchar[i] = srcchar[i];
		i++;
	}
	if (srcchar[i] == stop && i != n)
	{
		destchar[i] = srcchar[i];
		return (&destchar[i + 1]);
	}
	else
		return (0);
}
