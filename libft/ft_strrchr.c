/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:28:01 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 18:42:54 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*buff;

	buff = (char *)s;
	i = ft_strlen(s) + 1;
	while (i-- > 0)
		if (s[i] == c)
			return (&buff[i]);
	return (0);
}
