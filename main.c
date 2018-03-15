/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 16:07:26 by oleshche          #+#    #+#             */
/*   Updated: 2018/03/02 16:08:39 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <locale.h>

int		main(void)
{
    //setlocale(LC_ALL, "");
    int value = 65;
    int ret1 = ft_printf("%C", (wchar_t)value);
    int ret2 = printf("%C", (wchar_t)value);
    ft_printf("\nmy: ret = %d\toriginal: ret = %d\n", ret1, ret2);
    return (0);
}
