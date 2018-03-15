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

/*
** 0xxxxxxx
** 110xxxxx 10xxxxxx
** 1110xxxx 10xxxxxx 10xxxxxx
** 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
*/

static int      two_bytes_char(unsigned int v)
{
    unsigned char   octet1;
    unsigned char   octet2;
    unsigned char   octet;
    unsigned int    mask1;

    mask1 = MASK1;
    octet2 = (unsigned char)((v << 26) >> 26);
    octet1 = (unsigned char)(((v >> 6) << 27) >> 27);
    octet = (unsigned char)(MASK1 >> 8) | octet1;
    write(1, &octet, 1);
    octet = (unsigned char)((mask1 << 24) >> 24) | octet2;
    write(1, &octet, 1);
    return (2);
}

static int      three_bytes_char(unsigned int v)
{
    unsigned char   octet1;
    unsigned char   octet2;
    unsigned char   octet3;
    unsigned char   octet;
    unsigned int    mask2; 

    mask2 = MASK2;
    octet3 = (unsigned char)((v << 26) >> 26);
    octet2 = (unsigned char)(((v >> 6) << 26) >> 26);
    octet1 = (unsigned char)(((v >> 12) << 28) >> 28);
    octet = (unsigned char)((mask2 >> 16) | octet1);
    write(1, &octet, 1);
    octet = (unsigned char)(((mask2 << 16) >> 24) | octet2);
    write(1, &octet, 1);
    octet = (unsigned char)(((mask2 << 24) >> 24) | octet3);
    write(1, &octet, 1);
    return (3);
}

static int      four_bytes_char(unsigned int v)
{
    unsigned char   octet1;
    unsigned char   octet2;
    unsigned char   octet3;
    unsigned char   octet4;
    unsigned char   octet;

    octet4 = (unsigned char)((v << 26) >> 26);
    octet3 = (unsigned char)(((v >> 6) << 26) >> 26);
    octet2 = (unsigned char)(((v >> 12) << 26) >> 26);
    octet1 = (unsigned char)(((v >> 18) << 29) >> 29);
    octet = (unsigned char)((MASK3 >> 24) | octet1);
    write(1, &octet, 1);
    octet = (unsigned char)(((MASK3 << 8) >> 24) | octet2);
    write(1, &octet, 1);
    octet = (unsigned char)(((MASK3 << 16) >> 24) | octet3);
    write(1, &octet, 1);
    octet = (unsigned char)(((MASK3 << 24) >> 24) | octet4);
    write(1, &octet, 1);
    return (4);
}

int             ft_putwchar(wchar_t value)
{
    unsigned int    v;
    unsigned int    size;
    unsigned char   octet;

    v = (unsigned int)value;
    size = count_active_bits(v);
    if (size <= 7)
    {
        octet = (unsigned char)value;
        write(1, &octet, 1);
        return (1);
    }
    else if (size <= 11)
        return (two_bytes_char(v));
    else if (size <= 16)
        return (three_bytes_char(v));
    else
        return (four_bytes_char(v));
}

static void     print_if_null(char null, char *c, int minus)
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

int             if_wc_null(wchar_t *buf, int minus)
{
    int len;

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

int             c_con_spec(t_buf *curr, va_list ap)
{
    int     len;
    char    *c;
    char    null;

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

int             if_locale_not_set(wchar_t *buf)
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

int             wchar_con_spec(t_buf *curr, va_list ap)
{
    wchar_t *buf;
    int     null;
    int     len;

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