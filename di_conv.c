/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   di_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 19:24:57 by oleshche          #+#    #+#             */
/*   Updated: 2018/02/16 19:25:08 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *choose_size_di(t_buf *curr, va_list ap)
{
    char    *buf;

    if (curr->j == 1)
        buf = ft_itoa_base_extended(va_arg(ap, intmax_t), 10);
    else if (curr->z == 1)
        buf = ft_itoa_base_extended(va_arg(ap, long long), 10);
    else if (curr->l == 2)
        buf = ft_itoa_base_extended(va_arg(ap, long long), 10);
    else if (curr->l == 1 || curr->con_chr == 'D')
        buf = ft_itoa_base_extended(va_arg(ap, long), 10);
    else if (curr->h == 1)
        buf = ft_itoa_base((short)va_arg(ap, int), 10);
    else if (curr->h == 2)
        buf = ft_itoa_base((signed char)va_arg(ap, int), 10);
    else
        buf = ft_itoa(va_arg(ap, int));
    return (buf);
}

int		di_con_spec(t_buf *curr, char *buf)
{
    int len;
    int checker;

    checker = 0;
    curr->dash = 0;
    precision_apply(curr, &buf);
    if (curr->width)
        checker++;
    if (curr->width > ft_strlen(buf))
        width_apply(curr, &buf);
    else
        curr->width = ft_strlen(buf);
    flag_manage(curr, &buf);
    len = print_if_zero(curr, &buf, checker);
    free(buf);
    return (len);
}
