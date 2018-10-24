/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:20:58 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/05 21:39:07 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*buff;

	buff = (char *)s;
	i = 0;
	while (s[i] != (char)c)
	{
		if (!s[i])
			return (NULL);
		i++;
	}
	return (&buff[i]);
}
