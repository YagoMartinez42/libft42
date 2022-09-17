/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:06:24 by samartin          #+#    #+#             */
/*   Updated: 2022/09/17 19:44:45 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	pos;

	pos = 0;
	while ((src[pos] != 0) && (pos < (dstsize - 1)))
	{
		dst[pos] = src[pos];
		pos++;
	}
	if (dstsize > 0)
		dst[pos] = 0;
	while (src[pos] != 0)
		pos++;
	return (pos);
}