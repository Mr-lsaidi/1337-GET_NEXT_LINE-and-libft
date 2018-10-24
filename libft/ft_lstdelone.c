/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 02:17:47 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 02:17:49 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (!(ft_is_empty(*alst)))
	{
		tmp = *alst;
		(*del)(tmp->content, tmp->content_size);
		free(tmp);
		*alst = NULL;
	}
}
