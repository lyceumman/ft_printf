/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_conv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:46:46 by oleshche          #+#    #+#             */
/*   Updated: 2018/02/20 18:46:48 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*choose_size_u(t_buf *curr, va_list ap)
{
	char	*buf;

	if (curr->h == 1 && curr->con_chr != 'U')
		buf = ft_itoa_base((unsigned short)va_arg(ap, unsigned int), 10);
	else if (curr->h == 2 && curr->con_chr != 'U')
		buf = ft_itoa_base((unsigned char)va_arg(ap, unsigned int), 10);
	else if (curr->l == 1 || curr->con_chr == 'U')
		buf = ft_itoa_base_unsigned(va_arg(ap, unsigned long), 10);
	else if (curr->l == 2)
		buf = ft_itoa_base_unsigned(va_arg(ap, unsigned long long), 10);
	else if (curr->j == 1)
		buf = ft_itoa_base_unsigned(va_arg(ap, uintmax_t), 10);
	else if (curr->z == 1)
		buf = ft_itoa_base_unsigned(va_arg(ap, size_t), 10);
	else
		buf = ft_itoa_base_unsigned(va_arg(ap, unsigned int), 10);
	return (buf);
}

int		u_con_spec(t_buf *curr, char *buf)
{
	int	len;

	precision_apply(curr, &buf);
	if (ft_strequ(buf, "0") && !curr->prn)
		*buf = 0;
	if (curr->width > ft_strlen(buf))
		width_apply(curr, &buf);
	else
		curr->width = ft_strlen(buf);
	if (curr->zero && curr->prn == -1 && !curr->minus)
		zero_apply(&buf, curr);
	ft_putstr(buf);
	len = (int)ft_strlen(buf);
	free(buf);
	return (len);
}

void	afterflags(t_buf *curr, char **s)
{
	while (ft_strchr(".123456789", **s))
		(*s)++;
	while (ft_strchr("+#0 ", **s) && **s)
	{
		if (**s == '#')
			curr->dash++;
		if (**s == '+')
			curr->plus++;
		(*s)++;
	}
}

void	miss_trash(t_buf *curr, char **s)
{
	while (ft_strchr("0123456789+-#.tq", **s) && **s != 0)
		(*s)++;
	if (curr->zero > 1)
		curr->zero = 0;
	if (curr->dash > 1)
		curr->dash = 0;
	if (curr->plus > 1)
		curr->plus = 0;
	if (curr->minus > 1)
		curr->minus = 0;
	if (curr->space > 1)
		curr->space = 0;
}
