/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:03:34 by oleshche          #+#    #+#             */
/*   Updated: 2017/10/31 18:03:38 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (haystack[i + j] == needle[j] && needle[j] != '\0'
				&& i + j < len)
				j++;
			if (j == ft_strlen(needle))
				return ((char*)(haystack + i));
		}
		i++;
	}
	if (needle[0] == '\0')
		return ((char*)haystack);
	return (NULL);
}
