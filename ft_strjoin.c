/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:31:34 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/06 18:20:30 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	char	*join2;

	join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!join)
		return (0);
	join2 = join + ft_strlen(s1);
	ft_memcpy(join, s1, ft_strlen(s1));
	ft_memcpy(join2, s2, ft_strlen(s2));
	join[ft_strlen(s1) + ft_strlen(s2)] = 0;
	return (join);
}
