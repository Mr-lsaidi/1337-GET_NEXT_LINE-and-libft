/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 17:23:00 by lsaidi            #+#    #+#             */
/*   Updated: 2018/10/23 17:23:03 by lsaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_err(int i, char *s)
{
	if (i > 0)
		return (1);
	if (ft_strchr(s, SEPARATOR) != NULL && s)
		return (1);
	ft_strdel(&s);
	return (0);
}

int				get_next_line(int fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	static char *ret[256];
	int			i;
	int			j;

	i = 0;
	if (!line || read(fd, buff, 0) < 0)
		return (-1);
	if (!ret[fd])
		ret[fd] = ft_strnew(BUFF_SIZE + 1);
	while ((j = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[j] = '\0';
		(ft_strchr(buff, SEPARATOR) != NULL) ? i += 1 : i;
		ret[fd] = ft_strjoin(ret[fd], buff);
		if (i > 5)
			break ;
	}
	i = 0;
	while (ret[fd][i] != SEPARATOR && ret[fd][i] != '\0')
		i++;
	j = ft_err(i, ret[fd]);
	*line = ft_strsub(ret[fd], 0, i);
	ret[fd] = ft_strsub(ret[fd], i + 1, ft_strlen(ret[fd]) - i);
	return (j);
}
