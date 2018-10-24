/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:38:58 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 02:34:24 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*dest;
	char			*str;

	dest = (char *)dst;
	str = (char *)src;
	i = -1;
	while (++i < n)
		dest[i] = str[i];
	return (dst);
}
