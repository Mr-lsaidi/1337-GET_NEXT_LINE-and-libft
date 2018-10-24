/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:14:11 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/10 18:14:13 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!needle[0])
		return ((char*)&haystack[i]);
	while (haystack[i] && len)
	{
		j = 0;
		while (needle[j] == haystack[j + i] && needle[j] && i + j < len)
			j++;
		if (!needle[j] && i < len)
			return ((char*)&haystack[i]);
		i++;
	}
	return (0);
}
