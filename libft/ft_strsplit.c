/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 21:13:19 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 21:36:06 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char				**buff;
	unsigned int		len;
	char				*first;

	if (!s)
		return (NULL);
	len = ft_find_len((char *)s, c);
	if (!(buff = (char **)malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	first = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (first != s)
				*buff++ = ft_strsub(first, 0, s - first);
			first = (char *)s + 1;
		}
		s++;
	}
	if (first != s)
		*(buff++) = ft_strsub(first, 0, s - first);
	*buff = NULL;
	return (buff - len);
}
