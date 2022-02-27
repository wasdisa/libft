/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zozurgan <zozurgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:30:31 by zozurgan          #+#    #+#             */
/*   Updated: 2022/02/27 19:30:35 by zozurgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	if (lst != NULL)
	{
		node = lst;
		while (1)
		{
			if (node->next == NULL)
				return (node);
			node = node->next;
		}
	}
	return (NULL);
}
