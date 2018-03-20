/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:39:34 by oleshche          #+#    #+#             */
/*   Updated: 2017/11/08 18:39:36 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	char	*str;

	if (!s)
		return ;
	str = (char*)s;
	while (*str)
	{
		if((*str) < 0)
		{
			write(1, str++, 2);
			str++;
		}
		else
			write(1, str++, 1);
	}
}
