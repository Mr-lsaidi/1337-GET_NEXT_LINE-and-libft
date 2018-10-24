/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 22:12:41 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/06 19:05:30 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*buff;
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	if (!(buff = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (++i < len)
	{
		buff[i] = s[start];
		start++;
	}
	buff[i] = '\0';
	return (buff);
}
