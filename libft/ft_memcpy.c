/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 18:00:07 by oleshche          #+#    #+#             */
/*   Updated: 2017/10/26 18:00:10 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dst_str;
	char *src_str;

	if (!dst && !src)
		return (NULL);
	dst_str = (char *)dst;
	src_str = (char *)src;
	while (n--)
		*dst_str++ = *src_str++;
	return (dst);
}
