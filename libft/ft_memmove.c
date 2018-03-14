/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 18:28:51 by oleshche          #+#    #+#             */
/*   Updated: 2017/10/26 18:28:55 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	char *dst_chr;
	char *src_chr;

	dst_chr = (char *)dst;
	src_chr = (char *)src;
	if (src >= dst)
		while (len--)
			*dst_chr++ = *src_chr++;
	else
	{
		src_chr = src_chr + len - 1;
		dst_chr = dst_chr + len - 1;
		while (len--)
			*dst_chr-- = *src_chr--;
	}
	return (dst);
}
