/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:58:58 by oleshche          #+#    #+#             */
/*   Updated: 2017/11/05 13:58:59 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (!(sub = (char *)malloc(sizeof(char) * len + 1)) || !s)
		return (NULL);
	i = (size_t)start;
	j = 0;
	while (i < (size_t)start + len)
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}
