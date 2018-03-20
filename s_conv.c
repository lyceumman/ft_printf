/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_conv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 19:28:58 by oleshche          #+#    #+#             */
/*   Updated: 2018/03/06 17:18:56 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>

int		s_con_spec(t_buf *curr, va_list ap)
{
	int		len;
	char	*buf;

	printf("Ololo, it's <s> small conv! Locale is %s\n", setlocale(LC_CTYPE, NULL));
	if (!(buf = (va_arg(ap, char *))))
		buf = ft_strdup("(null)");
	else
		buf = ft_strdup(buf);
	precision_s(curr->prn, &buf);
	if (curr->width > ft_strlen(buf))
		width_apply(curr, &buf);
	else
		curr->width = ft_strlen(buf);
	if (curr->zero && !curr->minus)
		zero_apply(&buf, curr);
	ft_putstr(buf);
	len = (int)ft_strlen(buf);
	free(buf);
	return (len);
}

void	precision_s(int prn, char **buf)
{
	char	*temp;

	if (ft_strlen(*buf) <= (size_t)prn || prn == -1)
		return ;
	temp = ft_strsub(*buf, 0, (size_t)prn);
	free(*buf);
	*buf = temp;
}

void	*ft_wcsset(void *b, int c, size_t len)
{
	wchar_t	*temp;

	temp = b;
	while (len--)
		*temp++ = (wchar_t)c;
	return (b);
}

size_t	ft_wcssize(wchar_t *s)
{
	size_t	size;

	size = 0;
	while (*s)
		size += ft_wchar_size(*s++);
	return (size);
}
