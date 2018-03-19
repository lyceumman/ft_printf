/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_conv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:43:13 by oleshche          #+#    #+#             */
/*   Updated: 2018/02/20 15:43:16 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dash_apply(t_buf *curr, char **buf)
{
	char	*temp;

	temp = ft_strnew(ft_strlen(*buf) + 2);
	ft_memcpy(temp + 2, *buf, ft_strlen(*buf));
	temp[0] = '0';
	if (curr->con_chr == 'x')
		temp[1] = 'x';
	else
		temp[1] = 'X';
	free(*buf);
	*buf = temp;
}

char	*choose_size_x(t_buf *curr, va_list ap)
{
	char	*buf;

	if (curr->h == 1)
		buf = ft_itoa_base_unsigned((unsigned short)va_arg(ap, unsigned int),
		16);
	else if (curr->h == 2)
		buf = ft_itoa_base_unsigned((unsigned char)va_arg(ap, unsigned int),
		16);
	else if (curr->l == 1)
		buf = ft_itoa_base_unsigned(va_arg(ap, unsigned long), 16);
	else if (curr->l == 2)
		buf = ft_itoa_base_unsigned(va_arg(ap, unsigned long long), 16);
	else if (curr->j == 1)
		buf = ft_itoa_base_unsigned(va_arg(ap, uintmax_t), 16);
	else if (curr->z == 1)
		buf = ft_itoa_base_unsigned(va_arg(ap, size_t), 16);
	else
		buf = ft_itoa_base_unsigned(va_arg(ap, unsigned int), 16);
	return (buf);
}

void	x_zero_apply(t_buf *curr, char **buf)
{
	int		i;
	char	*temp;

	i = 0;
	temp = *buf;
	while (*temp)
		if (ft_isspace(*temp++))
			i++;
	if (i > 0)
	{
		if (curr->dash)
		{
			buf[0][0] = '0';
			if (curr->con_chr == 'x' || curr->con_chr == 'p')
				buf[0][1] = 'x';
			else
				buf[0][1] = 'X';
			ft_memset(*buf + 2, '0', (size_t)i);
		}
		else
			ft_memset(*buf, '0', (size_t)i);
	}
}

int		x_con_spec(t_buf *curr, char *buf)
{
	int	i;
	int	len;

	i = -1;
	if (curr->con_chr == 'x')
		while (buf[++i])
			buf[i] = (char)ft_tolower(buf[i]);
	if (curr->prn == 0 && ft_strequ(buf, "0"))
		*buf = '\0';
	else if (curr->prn != -1)
		precision_apply(curr, &buf);
	if (ft_strequ(buf, "0") && curr->dash)
		curr->dash = 0;
	if (curr->dash && curr->prn != 0)
		dash_apply(curr, &buf);
	if (curr->width > ft_strlen(buf))
		width_apply(curr, &buf);
	else
		curr->width = ft_strlen(buf);
	if (curr->zero && curr->prn == -1 && !curr->minus)
		x_zero_apply(curr, &buf);
	ft_putstr(buf);
	len = (int)ft_strlen(buf);
	free(buf);
	return (len);
}
