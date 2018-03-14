/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 19:24:00 by oleshche          #+#    #+#             */
/*   Updated: 2017/10/30 19:24:03 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s_chr;

	s_chr = (unsigned char *)s;
	while (n--)
	{
		if (*s_chr == (unsigned char)c)
			return (s_chr);
		s_chr++;
	}
	return (NULL);
}
