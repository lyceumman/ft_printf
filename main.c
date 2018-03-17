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
    printf("%s\n", setlocale(LC_ALL, "Fr_CH"));
    int ret1 = ft_printf("|%+.0o|", 0);
    int ret2 = printf("|%+.0o|", 0);
    ft_printf("\nmy: ret = %d\torg: ret = %d\n", ret2 ,ret2);
}
