/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing_conv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 17:47:16 by oleshche          #+#    #+#             */
/*   Updated: 2018/01/28 17:47:22 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	width_apply(t_buf *curr, char **buf)
{
	char	*temp;

	temp = ft_strnew((size_t)curr->width);
	if (curr->minus)
	{
		ft_memcpy(temp, *buf, ft_strlen(*buf));
		ft_memset(temp + ft_strlen(*buf), ' ', curr->width - ft_strlen(*buf));
	}
	else
	{
		ft_memset(temp, ' ', curr->width - ft_strlen(*buf));
		ft_memcpy(temp + curr->width - ft_strlen(*buf), *buf, ft_strlen(*buf));
	}
	free(*buf);
	*buf = temp;
}

void	precision_apply(t_buf *curr, char **buf)
{
	char	*temp;
	size_t	len;
	int		i;

	i = 0;
	temp = *buf - 1;
	while (*++temp)
		if (ft_isalnum(*temp) || *temp == '%')
			i++;
	if (curr->prn <= i)
		return ;
	len = curr->prn - (size_t)i;
	temp = ft_strnew((size_t)curr->prn + ft_strlen(*buf) - i);
	if (**buf == '-')
	{
		*temp = '-';
		ft_memset(temp + 1, '0', len);
		ft_memmove(temp + len + 1, *buf + 1, ft_strlen(*buf) - 1);
	}
	else if (ft_memset(temp, '0', len))
		ft_memmove(temp + len, *buf, ft_strlen(*buf));
	free(*buf);
	*buf = temp;
}

int		choose_type(t_buf *cur, va_list ap, int ret)
{
	if (cur->con_chr == '%')
		return (percent_spec(cur));
	else if (cur->con_chr == 'p')
		return (pointer_spec(cur, ap));
	else if (cur->con_chr == 'd' || cur->con_chr == 'i' || cur->con_chr == 'D')
		return (di_con_spec(cur, choose_size_di(cur, ap)));
	else if ((cur->con_chr == 'c' && cur->l) || cur->con_chr == 'C')
		return (wchar_con_spec(cur, ap));
	else if (cur->con_chr == 'c')
		return (c_con_spec(cur, ap));
	else if ((cur->con_chr == 's' && cur->l == 1) || cur->con_chr == 'S')
		return (s_wchar_con(cur, ap));
	else if (cur->con_chr == 's')
		return (s_con_spec(cur, ap));
	else if (cur->con_chr == 'o' || cur->con_chr == 'O')
		return (o_con_spec(cur, choose_size_o(cur, ap)));
	else if (cur->con_chr == 'x' || cur->con_chr == 'X')
		return (x_con_spec(cur, choose_size_x(cur, ap)));
	else if (cur->con_chr == 'u' || cur->con_chr == 'U')
		return (u_con_spec(cur, choose_size_u(cur, ap)));
	else if (cur->con_chr == 'n')
		return (n_con_spec(choose_size_n(cur, ap), ret));
	else if (!ft_strchr("sSpdDioOuUxXcC%", cur->con_chr) && cur->con_chr)
		return (invalid_con_spec(cur));
	return (0);
}
