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

size_t      ft_putwcs(wchar_t *s)
{
    size_t i;

    i = 0;
    while (*s)
        i += ft_putwchar(*(s++));
    return (i);
}

wchar_t     *ft_wcsncpy(wchar_t *dst, const wchar_t *src, size_t len)
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

size_t      ft_wcslen(const wchar_t *str)
{
    const wchar_t *s;

    s = str;
    while (*s)
        s++;
    return (s - str);
}

void        wcs_precision(wchar_t **buf, size_t size)
{
    wchar_t *temp;
    size_t  len;
    int     i;

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

wchar_t     *ft_wcsdup(const wchar_t *s1)
{
    wchar_t	*res;
    size_t	n;
    size_t	i;

    if (s1 == NULL)
        return (NULL);
    n = ft_wcslen(s1);
    i = 0;
    if (!(res = (wchar_t*)malloc(sizeof(wchar_t )*(n + 1))))
        return (res);
    while (i < n)
    {
        res[i] = s1[i];
        i++;
    }
    res[i] = L'\0';
    return (res);
}

int  ft_wchar_size(wchar_t value)
{
    unsigned int    v;
    short           i;

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

void				*ft_wcsset(void *b, int c, size_t len)
{
    wchar_t *temp;

    temp = b;
    while (len--)
        *temp++ = (wchar_t )c;
    return (b);
}

size_t  ft_wcssize(wchar_t *s)
{
    size_t  size;

    size = 0;
    while (*s)
        size += ft_wchar_size(*s++);
    return (size);
}

wchar_t     *wcs_width(t_buf *curr, wchar_t *buf)
{
    wchar_t *temp;

    temp = (wchar_t*)malloc(sizeof(wchar_t) * (ft_wcslen(buf) + 1 + curr->width - ft_wcssize(buf)));
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
    return(temp);
}

void    wcs_zero_apply(wchar_t *buf)
{
    while (*buf == L' ')
        *buf++ = L'0';
}

int     only_chars(wchar_t *buf)
{
    while (*buf)
        if (ft_wchar_size(*buf++) != 1)
            return (1);
    return (0);
}

int     s_wchar_con(t_buf *curr, va_list ap)
{
    wchar_t *buf;
    int     len;

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