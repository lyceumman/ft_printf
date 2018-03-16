/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer-percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 15:20:37 by oleshche          #+#    #+#             */
/*   Updated: 2018/03/11 15:21:13 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     percent_spec(t_buf *curr)
{
    char    *buf;
    int     len;

    buf = ft_strdup("%");
    curr->space = 0;
    if (curr->width > 1)
        width_apply(curr, &buf);
    if (curr->zero && !curr->minus)
        zero_apply(&buf, curr);
    len = (int)ft_strlen(buf);
    ft_putstr(buf);
    free(buf);
    return (len);
}

int     pointer_spec(t_buf *curr, va_list ap)
{
    char    *adress;
    int     len;
    int     i;

    adress = ft_itoa_base_extended((long)va_arg(ap, void*), 16);
    i = 0;
    curr->dash = 1;
    precision_apply(curr, &adress);
    dash_apply(curr, &adress);
    while (adress[++i])
        adress[i] = (char)ft_tolower(adress[i]);
    if (curr->prn == 0 && !ft_strcmp(adress, "0x0"))
        adress[2] = 0;
    if (curr->width > ft_strlen(adress))
        width_apply(curr, &adress);
    else
        curr->width = ft_strlen(adress);
    if (curr->zero && !curr->minus)
        x_zero_apply(curr, &adress);
    len = (int)ft_strlen(adress);
    ft_putstr(adress);
    free(adress);
    return (len);
}

int     invalid_con_spec(t_buf *curr)
{
    char *buf;
    int len;

    buf = ft_strnew(1);
    *buf = curr->con_chr;
    if (curr->width > ft_strlen(buf))
        width_apply(curr, &buf);
    if (curr->zero && !curr->minus)
        zero_apply(&buf, curr);
    ft_putstr(buf);
    len = (int)ft_strlen(buf);
    free(buf);
    return (len);
}

