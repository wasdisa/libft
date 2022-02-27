/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsari <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:50:28 by fsari             #+#    #+#             */
/*   Updated: 2022/02/27 17:42:07 by zozurgan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*jointstr;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	jointstr = (char *)malloc((ft_strlen(s1) + \
				ft_strlen(s2) + 1) * sizeof(char));
	if (!jointstr)
		return (NULL);
	while (*s1)
	{
		jointstr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		jointstr[i] = *s2;
		s2++;
		i++;
	}
	jointstr[i] = '\0';
	return (jointstr);
}
