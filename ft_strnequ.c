/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:51:54 by flhember          #+#    #+#             */
/*   Updated: 2018/11/16 19:30:25 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	while (s1[i] == s2[i] && i < n && s1[i] != '\0' && s2 != '\0')
		i++;
	if (i == n)
		return (1);
	return (0);
}
