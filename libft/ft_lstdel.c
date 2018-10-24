/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 02:17:14 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/11 23:44:44 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (!(ft_is_empty(*alst)))
		while (*alst != NULL)
		{
			tmp = *alst;
			(*del)(tmp->content, tmp->content_size);
			free(tmp);
			*alst = (*alst)->next;
		}
	*alst = NULL;
}
