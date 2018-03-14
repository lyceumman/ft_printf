/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:25:36 by oleshche          #+#    #+#             */
/*   Updated: 2017/10/31 17:25:37 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	*temp;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			temp = (char *)&(s[i]);
			return (temp);
		}
		i++;
	}
	if (s[i] == (unsigned char)c)
	{
		temp = (char *)&(s[i]);
		return (temp);
	}
	return (NULL);
}
