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
	setlocale(LC_ALL, "");
	/*int value = 224;
	//int i = 0;
	int ret1;
	int ret2;
	*//*while (i < 255)
	{
		ret1 = ft_printf("%c\n", i);
		ret2 = printf("%c\n", i);
		if (ret1 != ret2)
			printf("value = %d\tret1 = %d\tret2 = %d\n", i, ret1, ret2);
		i++;
	}*//*
	ret1 = ft_printf("%ls", L"42Kashim a 1001 histoires à raconterIl fait au moins");
	ret2 = printf("%ls", L"42Kashim a 1001 histoires à raconterIl fait au moins");
	ft_printf("\nret1 = %d\tret2 = %d\n", ret1, ret2);
	*/
    ft_printf("%lc\n", L'à');
    printf("%lc", L'à');
    return (0);
}
