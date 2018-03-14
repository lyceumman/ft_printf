/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:32:17 by oleshche          #+#    #+#             */
/*   Updated: 2017/11/11 14:32:20 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	char	*temp;
	int		i;
	size_t	len;

	if (!(temp = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (temp);
	len = ft_strlen(str);
	i = 0;
	while (str[i] != '\0')
	{
		temp[i] = str[len - 1 - i];
		i++;
	}
	temp[len] = '\0';
	return (temp);
}
