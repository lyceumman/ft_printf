/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_conv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:12:26 by oleshche          #+#    #+#             */
/*   Updated: 2018/02/19 19:12:28 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char        *choose_size_o(t_buf *curr, va_list ap)
{
    char    *buf;

    if (curr->con_chr == 'O')
        buf = ft_itoa_base_unsigned(va_arg(ap, unsigned long), 8);
    else if (curr->h == 1)
        buf = ft_itoa_base((unsigned short)va_arg(ap, unsigned int), 8);
    else if (curr->h == 2)
        buf = ft_itoa_base((unsigned char)va_arg(ap,unsigned int), 8);
    else if (curr->l == 1)
        buf = ft_itoa_base_unsigned(va_arg(ap, unsigned long), 8);
    else if (curr->l == 2)
        buf = ft_itoa_base_unsigned(va_arg(ap, unsigned long long), 8);
    else if (curr->j == 1)
        buf = ft_itoa_base_unsigned(va_arg(ap, uintmax_t), 8);
    else if (curr->z == 1)
        buf = ft_itoa_base_unsigned(va_arg(ap, size_t), 8);
    else
        buf = ft_itoa_base_unsigned(va_arg(ap, unsigned int), 8);
    return (buf);
}

int         print_if_zero(t_buf *curr, char **buf, int checker)
{
    int i;

    if (!ft_atoi(*buf) && !curr->prn && !curr->dash)
    {
        if (checker)
        {
            i = -1;
            while ((size_t)++i < curr->width)
                ft_putchar(' ');
            return (i);
        }
        if (curr->plus)
            return ((int)write(1, "+", 1));
        if (curr->space)
            return ((int)write(1, " ", 1));
        return (0);
    }
    else
        ft_putstr(*buf);
    return ((int)ft_strlen(*buf));
}

int         o_con_spec(t_buf *curr, char *buf)
{
    int prn;
    int len;
    int checker;

    prn = curr->prn;
    checker = 0;
    if (curr->dash && curr->prn <= (int)ft_strlen(buf) && *buf != '0')
        curr->prn = (int)ft_strlen(buf) + 1;
    precision_apply(curr, &buf);
    if (curr->width)
        checker++;
    if (curr->width > ft_strlen(buf))
        width_apply(curr, &buf);
    else
        curr->width = ft_strlen(buf);
    if (curr->space && curr->zero)
        space_apply(&buf);
    if (curr->zero && prn == -1 && !curr->minus)
        zero_apply(&buf, curr);
    len = print_if_zero(curr, &buf, checker);
    free(buf);
    return (len);
}
