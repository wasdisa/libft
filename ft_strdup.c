/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zozurgan <zozurgan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:32:04 by zozurgan          #+#    #+#             */
/*   Updated: 2022/02/27 19:32:06 by zozurgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	int		i;

	i = 0;
	a = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!a)
		return (NULL);
	while (s1[i])
	{
		a[i] = s1[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
