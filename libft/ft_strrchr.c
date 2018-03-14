/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:49:14 by oleshche          #+#    #+#             */
/*   Updated: 2017/10/31 17:49:16 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;

	i = 0;
	temp = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			temp = (char *)&(s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		temp = (char *)&(s[i]);
	return (temp);
}
