/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:39:40 by oleshche          #+#    #+#             */
/*   Updated: 2017/10/31 16:39:41 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t len;

	i = ft_strlen(dst);
	len = i;
	j = 0;
	if (dstsize > i)
		while (src[j] != '\0' && i < dstsize - 1)
			dst[i++] = src[j++];
	if (dstsize != 0 && len <= dstsize)
	{
		dst[i] = '\0';
		return (len + ft_strlen(src));
	}
	return (ft_strlen(src) + dstsize);
}
