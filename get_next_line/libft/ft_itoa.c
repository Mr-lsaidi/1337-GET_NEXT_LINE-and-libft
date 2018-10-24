/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:13:54 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/11 16:49:55 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_length(int nb)
{
	int		length;

	length = 0;
	if (nb == 0)
		return (1);
	if (nb < length)
		length += 1;
	while (nb)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}

char			*ft_itoa(int n)
{
	size_t		i;
	size_t		len;
	char		*buff;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_length(n);
	if (!(buff = (char *)malloc((sizeof(*buff)) * (len + 1))))
		return (NULL);
	buff[len] = 0;
	if (n < 0)
	{
		buff[0] = '-';
		n = -n;
		i++;
	}
	while (i < len--)
	{
		buff[len] = ((n % 10) + '0');
		n /= 10;
	}
	return (buff);
}
