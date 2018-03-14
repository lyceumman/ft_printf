/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 12:26:43 by oleshche          #+#    #+#             */
/*   Updated: 2017/10/31 12:26:44 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_str;
	unsigned char *s2_str;

	s1_str = (unsigned char *)s1;
	s2_str = (unsigned char *)s2;
	while (n--)
	{
		if (*s1_str == *s2_str)
		{
			s1_str++;
			s2_str++;
		}
		else
			return (*s1_str - *s2_str);
	}
	return (0);
}
