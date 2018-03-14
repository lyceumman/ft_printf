/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 15:33:53 by oleshche          #+#    #+#             */
/*   Updated: 2017/11/02 15:33:55 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*temp;
	size_t	i;

	temp = NULL;
	if (!(temp = (char *)malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
		temp[i++] = 0;
	return (temp);
}
