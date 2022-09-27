/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:29:35 by samartin          #+#    #+#             */
/*   Updated: 2022/09/27 15:36:05 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void tsttoupper(unsigned  int i, char* s)
{
	i++;
	if (*s >= 'a' && *s <= 'z')
		*s -= 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

#include <stdio.h>

int main ()
{
	char s[20] = "Hola mundo";
	ft_striteri(s, tsttoupper);
	printf("%s", s);
}