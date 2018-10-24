/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 02:15:46 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/11 23:46:14 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void		ft_lstadd2(t_list **lst, t_list *new)
{
	t_list *p;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		p = *lst;
		while (p->next)
			p = p->next;
		p->next = new;
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list_h;
	t_list	*p;

	if (!lst)
		return (NULL);
	p = lst;
	list_h = NULL;
	while (p)
	{
		ft_lstadd2(&list_h, f(p));
		p = p->next;
	}
	return (list_h);
}
