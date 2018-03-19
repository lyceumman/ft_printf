/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs_for_wchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 17:36:31 by oleshche          #+#    #+#             */
/*   Updated: 2018/03/17 17:36:33 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_putwcs(wchar_t *s)
{
	size_t	i;

	i = 0;
	while (*s)
		i += ft_putwchar(*(s++));
	return (i);
}

wchar_t		*ft_wcsncpy(wchar_t *dst, const wchar_t *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[i] != L'\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = L'\0';
	return (dst);
}

size_t		ft_wcslen(const wchar_t *str)
{
	const wchar_t	*s;

	s = str;
	while (*s)
		s++;
	return (s - str);
}

void		wcs_precision(wchar_t **buf, size_t size)
{
	wchar_t	*temp;
	size_t	len;
	int		i;

	len = 0;
	i = 0;
	while ((*buf)[i] && len < size)
		len += ft_wchar_size((*buf)[i++]);
	if (len > size)
		i--;
	temp = (wchar_t*)malloc(sizeof(wchar_t) * (i + 1));
	ft_wcsncpy(temp, *buf, (size_t)i);
	temp[i] = L'\0';
	free(*buf);
	*buf = temp;
}

wchar_t		*ft_wcsdup(const wchar_t *s1)
{
	wchar_t	*res;
	size_t	n;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	n = ft_wcslen(s1);
	i = 0;
	if (!(res = (wchar_t*)malloc(sizeof(wchar_t ) * (n + 1))))
		return (res);
	while (i < n)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = L'\0';
	return (res);
}
