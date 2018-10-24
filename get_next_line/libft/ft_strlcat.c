/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:32:47 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 18:33:23 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		cmp;
	size_t		i;
	size_t		j;

	cmp = 0;
	i = ft_strlen(dst);
	cmp = ft_strlen(src);
	if (size == 0)
		return (cmp);
	if (i > size)
		cmp += size;
	else
		cmp += i;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (cmp);
}
