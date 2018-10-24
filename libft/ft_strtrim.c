/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:32:02 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/06 19:05:13 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char			*ret;
	unsigned int	i;
	int				b;
	int				c;

	b = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	c = ft_strlen(s) - 1;
	if (!(ret = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (ft_issplit(s[i]))
		i++;
	if (s[i] == '\0')
		return (ft_strnew(1));
	while (s[b])
	{
		if (ft_issplit(s[c]) == 1)
			c--;
		b++;
	}
	c = c - i + 1;
	ret = ft_strsub(s, i, c);
	return (ret);
}
