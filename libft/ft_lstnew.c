/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 02:19:01 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/08 21:12:12 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	void	*tmp;

	list = (t_list*)malloc(sizeof(t_list));
	if (!(ft_is_empty(list)))
	{
		if (content == NULL)
		{
			list->content = NULL;
			list->content_size = 0;
		}
		else
		{
			tmp = ft_memalloc(content_size);
			ft_memcpy(tmp, content, content_size);
			list->content = tmp;
			list->content_size = content_size;
		}
		list->next = NULL;
	}
	else
		return (NULL);
	return (list);
}
