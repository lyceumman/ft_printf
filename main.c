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
//    printf("%s\n", setlocale(LC_ALL, "Fr_CH"));
//    int ret1 = ft_printf("|%+.0o|", 0);
//    int ret2 = printf("|%+.0o|", 0);
//    ft_printf("\nmy: ret = %d\torg: ret = %d\n", ret2 ,ret2);

    printf("%s\n", setlocale(LC_CTYPE, "Fr_CH"));
    char *string = "42Kashim a 1001 histoires à raconterIl fait au moins -8000";
    int a = '\xc3';
    int ret1 = ft_printf("%s", string);
    int ret2 = printf("%s", string);
    ft_printf("\nmy: ret = %d\torg: ret = %d\n", ret2 ,ret2);
    ft_printf("a = %d\n", a);
    ft_printf("a = %d\n", (char)a);
    ft_printf("a = %d\n", (unsigned char)a);

    return (0);
}
