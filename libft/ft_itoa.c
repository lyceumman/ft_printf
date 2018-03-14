/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:28:51 by oleshche          #+#    #+#             */
/*   Updated: 2017/11/07 16:28:57 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(int n)
{
	int		len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char		*res;
	int			len;
	int			i;
	int			flag;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = nbr_len(n);
	res = ft_strnew(len);
	i = 0;
	flag = 0;
	if (n < 0 && (n = -n) && res)
	{
		res[i++] = '-';
		flag = 1;
	}
	i = len - 1;
	while (i >= 0 && res)
	{
		if (flag == 1 && i == 0)
			break ;
		res[i--] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}
