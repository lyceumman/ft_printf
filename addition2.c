/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addition2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 16:39:10 by oleshche          #+#    #+#             */
/*   Updated: 2018/03/17 16:39:14 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	count_active_bits(unsigned int nbr)
{
	int i;

	i = 32;
	while (--i >= 0)
		if ((nbr >> i) & 1)
			return ((unsigned)i + 1);
	return (0);
}

int				nbr_len(int n)
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

char			*ft_itoa_base(int nbr, int base)
{
	char	*res;
	int		i;

	if (base < 2 || base > 16
		|| !(res = ft_strnew(34)))
		return (NULL);
	i = 0;
	if (base == 10 && nbr < 0)
		res[i++] = '-';
	calc(nbr, base, &i, res);
	res[i] = '\0';
	return (res);
}
