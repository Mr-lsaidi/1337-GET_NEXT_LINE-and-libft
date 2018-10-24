/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:33:52 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 18:34:24 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dst)
	{
		while (s[i] != '\0')
		{
			dst[i] = (*f)(s[i]);
			i++;
		}
		dst[i] = '\0';
	}
	else
		return (0);
	return (dst);
}
