/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:42:49 by samartin          #+#    #+#             */
/*   Updated: 2022/09/24 15:55:08 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	pos1;
	unsigned int	pos2;

	if (haystack == NULL)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	pos1 = 0;
	while (haystack[pos1] != 0 && pos1 < len)
	{	
		pos2 = 0;
		while (haystack[pos1 + pos2] == needle[pos2] && (pos1 + pos2) < len)
		{
			if (needle[pos2 + 1] == 0)
				return ((char *)&haystack[pos1]);
			pos2++;
		}
		pos1++;
	}
	return (NULL);
}
