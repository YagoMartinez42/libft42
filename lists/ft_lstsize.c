/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:38:52 by samartin          #+#    #+#             */
/*   Updated: 2022/09/23 17:15:41 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	lst_len;

	if (lst == NULL)
		return (0);
	lst_len = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		lst_len++;
	}
	return (lst_len);
}
