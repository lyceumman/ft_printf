/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 15:05:28 by oleshche          #+#    #+#             */
/*   Updated: 2017/11/04 15:05:34 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*strnew;
	size_t	i;

	if (!(strnew = (char *)malloc(sizeof(char) * (size + 1))))
		return (strnew);
	i = 0;
	while (i <= size)
		strnew[i++] = '\0';
	return (strnew);
}
