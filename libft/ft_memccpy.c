/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:13:51 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 02:32:23 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c,
		size_t n)
{
	size_t	i;
	char	*dest;
	char	*str;

	dest = (char *)dst;
	str = (char *)src;
	i = 0;
	while (n > 0)
	{
		dest[i] = str[i];
		if (str[i] == (char)c)
			return (dest + i + 1);
		i++;
		n--;
	}
	return (NULL);
}
