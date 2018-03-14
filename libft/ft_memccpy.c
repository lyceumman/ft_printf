/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:05:50 by oleshche          #+#    #+#             */
/*   Updated: 2017/10/31 13:05:52 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_str;
	unsigned char	*src_str;
	size_t			i;

	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_str[i] = src_str[i];
		if (src_str[i] == (unsigned char)c)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
