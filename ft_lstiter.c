/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zozurgan <zozurgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:30:24 by zozurgan          #+#    #+#             */
/*   Updated: 2022/02/27 19:30:26 by zozurgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	if (lst != NULL)
	{
		node = lst;
		while (1)
		{
			(*f)(node->content);
			node = node->next;
			if (node == NULL)
				return ;
		}
	}
}
