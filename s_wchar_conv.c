/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_wchar_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:51:29 by oleshche          #+#    #+#             */
/*   Updated: 2018/02/21 18:51:32 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_wchar_size(wchar_t value)
{
	unsigned int	v;
	short			i;

	v = (unsigned int)value;
	i = (short)count_active_bits(v);
	if (i <= 7)
		return (1);
	if (i <= 11)
		return (2);
	if (i <= 16)
		return (3);
	else
		return (4);
}

wchar_t		*wcs_width(t_buf *curr, wchar_t *buf)
{
	wchar_t	*temp;

	temp = (wchar_t*)malloc(sizeof(wchar_t) *
		(ft_wcslen(buf) + 1 + curr->width - ft_wcssize(buf)));
	if (curr->minus)
	{
		ft_wcsncpy(temp, buf, ft_wcslen(buf));
		ft_wcsset(temp + ft_wcslen(buf), L' ', curr->width - ft_wcssize(buf));
	}
	else
	{
		ft_wcsset(temp, L' ', curr->width - ft_wcssize(buf));
		ft_wcsncpy(temp + curr->width - ft_wcssize(buf), buf, ft_wcslen(buf));
	}
	temp[ft_wcslen(buf) + curr->width - ft_wcssize(buf)] = L'\0';
	free(buf);
	return (temp);
}

void		wcs_zero_apply(wchar_t *buf)
{
	while (*buf == L' ')
		*buf++ = L'0';
}

int			only_chars(wchar_t *buf)
{
	while (*buf)
		if (ft_wchar_size(*buf++) != 1)
			return (1);
	return (0);
}

#include <locale.h>

int			s_wchar_con(t_buf *curr, va_list ap)
{
	wchar_t	*buf;
	int		len;

	printf("Ololo, it's <S> conv! Locale is %s\n", setlocale(LC_CTYPE, NULL));
	if (!(buf = ft_wcsdup(va_arg(ap, wchar_t*))))
		buf = ft_wcsdup(L"(null)");
	if (MB_CUR_MAX == 1 && only_chars(buf))
	{
		free(buf);
		return (-1);
	}
	if ((size_t)curr->prn < ft_wcssize(buf))
		wcs_precision(&buf, (size_t)curr->prn);
	if (curr->width > ft_wcssize(buf))
		buf = wcs_width(curr, buf);
	if (curr->zero && !curr->minus)
		wcs_zero_apply(buf);
	len = (int)ft_putwcs(buf);
	free(buf);
	return (len);
}
