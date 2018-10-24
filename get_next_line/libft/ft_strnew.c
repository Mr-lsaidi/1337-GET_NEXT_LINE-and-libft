/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:17:18 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 18:39:32 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*buff;

	if (!(buff = (char *)malloc(size + 1)))
		return (NULL);
	ft_bzero(buff, size + 1);
	return (buff);
}
