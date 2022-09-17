/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:41:02 by samartin          #+#    #+#             */
/*   Updated: 2022/09/17 16:16:56 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned int	len;
	unsigned int	i;
	char			*s2;

	len = 0;
	while (s1[len])
		len++;
	s2 = malloc(len);
	i = 0;
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}