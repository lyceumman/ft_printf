/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_conv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:48:18 by oleshche          #+#    #+#             */
/*   Updated: 2018/02/19 16:48:25 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void			print_if_null(char null, char *c, int minus)
{
	if (null)
		ft_putstr(c);
	else if (minus)
	{
		write(1, "", 1);
		ft_putstr(c + 1);
	}
	else
	{
		*(c + ft_strlen(c) - 1) = 0;
		ft_putstr(c);
		write(1, "", 1);
	}
}

int					if_wc_null(wchar_t *buf, int minus)
{
	int	len;

	if (minus)
	{
		write(1, "", 1);
		len = 1 + (int)ft_putwcs(buf + 1);
	}
	else
	{
		*(buf + ft_wcslen(buf) - 1) = 0;
		len = 1 + (int)ft_putwcs(buf);
		write(1, "", 1);
	}
	return (len);
}

int					c_con_spec(t_buf *curr, va_list ap)
{
	int		len;
	char	*c;
	char	null;

	null = 1;
	c = ft_strdup(" ");
	if (!(*c = (unsigned char)va_arg(ap, int)))
		null = *c;
	if (curr->width > ft_strlen(c))
		width_apply(curr, &c);
	else
		curr->width = ft_strlen(c);
	if (curr->zero && !curr->minus)
		zero_apply(&c, curr);
	print_if_null(null, c, curr->minus);
	len = (int)ft_strlen(c);
	free(c);
	if (!null)
		len++;
	return (len);
}

int					if_locale_not_set(wchar_t *buf)
{
	if (*buf <= 255)
	{
		write(1, buf, 1);
		free(buf);
		return (1);
	}
	free(buf);
	return (-1);
}

int					wchar_con_spec(t_buf *curr, va_list ap)
{
	wchar_t	*buf;
	int		null;
	int		len;

	buf = ft_wcsdup(L" ");
	null = 1;
	if (!(*buf = (wchar_t)va_arg(ap, wint_t)))
		null = 0;
	if (MB_CUR_MAX == 1)
		return (if_locale_not_set(buf));
	if (curr->width > ft_wcssize(buf))
		buf = wcs_width(curr, buf);
	if (null)
		len = (int)ft_putwcs(buf);
	else
		len = if_wc_null(buf, curr->minus);
	free(buf);
	return (len);
}
