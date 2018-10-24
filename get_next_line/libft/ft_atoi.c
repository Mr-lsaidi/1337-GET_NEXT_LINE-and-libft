/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 02:03:52 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 02:04:04 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int						i;
	long					signe;
	unsigned long long int	rest;

	i = 0;
	signe = 0;
	rest = 0;
	while ((nptr[i] > 6 && nptr[i] < 14) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
		signe = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		rest = (rest * 10) + ((int)nptr[i++] - '0');
	if (rest >= 21474836495 && signe)
		return (0);
	if (rest >= 21474836495 && !signe)
		return (-1);
	if (signe == 1)
		return (-rest);
	else
		return (rest);
}
