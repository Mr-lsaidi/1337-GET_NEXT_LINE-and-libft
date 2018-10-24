/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:07:24 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 02:32:52 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buff;

	buff = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (buff[i] == (unsigned char)c)
			return ((void *)buff + i);
		i++;
	}
	return (NULL);
}
