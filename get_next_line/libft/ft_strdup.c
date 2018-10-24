/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 19:48:12 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 18:29:31 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *buff;

	buff = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!buff)
	{
		buff = NULL;
		return (buff);
	}
	ft_strcpy(buff, s1);
	return (buff);
}
