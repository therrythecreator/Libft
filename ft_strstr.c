/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 17:49:06 by flhember          #+#    #+#             */
/*   Updated: 2018/11/16 19:26:44 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char*)&s1[i]);
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[j])
		{
			tmp = i;
			while (s1[i++] == s2[j++])
				if (s2[j] == '\0')
					return ((char*)&s1[tmp]);
			j = 0;
			i = tmp;
		}
		i++;
	}
	return (0);
}
