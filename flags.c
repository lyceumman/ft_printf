/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 19:31:20 by oleshche          #+#    #+#             */
/*   Updated: 2018/02/16 19:31:21 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		space_apply(char **buf)
{
	char	*temp;
	int		i;

	if (**buf == ' ')
		return ;
	i = 0;
	temp = *buf;
	while (*temp)
		if (ft_isdigit(*temp++))
			i++;
	if ((size_t)i == ft_strlen(*buf))
	{
		temp = ft_strnew(ft_strlen(*buf) + 1);
		*temp = ' ';
		ft_memcpy(temp + 1, *buf, ft_strlen(*buf));
		free(*buf);
		*buf = temp;
	}
	else
	{
		ft_memmove(*buf + 1, *buf, (size_t)i);
		(*buf)[0] = ' ';
	}
}

static void	plus_part(char **buf)
{
	char	*temp;
	int		i;

	temp = ft_strnew(ft_strlen(*buf) + 1);
	i = -1;
	while (!ft_isdigit(buf[0][++i]))
		temp[i] = buf[0][i];
	temp[i] = '+';
	ft_memcpy(temp + 1, *buf + i, ft_strlen(*buf + i));
	free(*buf);
	*buf = temp;
}

void		plus_apply(char **buf)
{
	char	*temp;
	int		i;

	i = 0;
	temp = *buf;
	while (*temp)
		if (ft_isdigit(*temp++))
			i++;
	if ((size_t)i < ft_strlen(*buf))
		if (!ft_isdigit(buf[0][0]))
		{
			i = -1;
			while (buf[0][++i])
				if (buf[0][i] == ' ' && ft_isdigit(buf[0][i + 1]))
					buf[0][i] = '+';
		}
		else
		{
			ft_memmove(*(buf) + 1, *buf, (size_t)i);
			(*buf)[0] = '+';
		}
	else
		plus_part(buf);
}

void		flag_manage(t_buf *curr, char **buf)
{
	if (curr->plus && !ft_strchr(*buf, '-'))
		plus_apply(buf);
	if (curr->space && !curr->plus && !ft_strchr(*buf, '-'))
		space_apply(buf);
	if (curr->zero && curr->prn < 0 && !curr->minus)
		zero_apply(buf, curr);
}

void		zero_apply(char **buf, t_buf *curr)
{
	char	*temp;

	if (curr->space && curr->con_chr == 'd')
		temp = *buf + 1;
	else
		temp = *buf;
	if (!ft_strchr(temp, '-') && !ft_strchr(temp, '+'))
	{
		while (ft_isspace(*temp))
			*temp++ = '0';
		return ;
	}
	if ((temp = ft_strchr(*buf, '+')))
		**buf = '+';
	else if ((temp = ft_strchr(*buf, '-')))
		**buf = '-';
	ft_memset(*buf + 1, '0', temp - *buf);
}
