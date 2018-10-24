/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 15:43:57 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/14 15:44:26 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int nb;
	unsigned int len;

	if (nbr < 0)
	{
		nb = -nbr;
		ft_putchar('-');
	}
	else
		nb = nbr;
	len = 0;
	while (base[len])
		len++;
	if (nb < len)
		ft_putchar(base[nb % len]);
	else
	{
		ft_putnbr_base(nb / len, base);
		ft_putchar(base[nb % len]);
	}
}
