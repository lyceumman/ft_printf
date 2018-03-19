/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addition.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:44:39 by oleshche          #+#    #+#             */
/*   Updated: 2018/01/26 11:44:43 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	calc_extended(intmax_t nbr, int base, int *i, char *res)
{
	char	*digit;

	digit = "0123456789ABCDEF";
	if (ABS(nbr) >= base)
		calc_extended(nbr / base, base, i, res);
	res[(*i)++] = digit[ABS(nbr % base)];
}

void		calc(int nbr, int base, int *i, char *res)
{
	char	*digit;

	digit = "0123456789ABCDEF";
	if (ABS(nbr) >= base)
		calc(nbr / base, base, i, res);
	res[(*i)++] = digit[ABS(nbr % base)];
}

static void	calc_unsigned(uintmax_t nbr, unsigned int base, int *i, char *res)
{
	char	*digit;

	digit = "0123456789ABCDEF";
	if (ABS(nbr) >= base)
		calc_unsigned(nbr / base, base, i, res);
	res[(*i)++] = digit[ABS(nbr % base)];
}

char		*ft_itoa_base_extended(intmax_t nbr, int base)
{
	char	*res;
	int		i;

	if (nbr == INT64_MIN)
		return (ft_strdup("-9223372036854775808"));
	if (base < 2 || base > 16
		|| !(res = ft_strnew(34)))
		return (NULL);
	i = 0;
	if (base == 10 && nbr < 0)
		res[i++] = '-';
	calc_extended(nbr, base, &i, res);
	res[i] = '\0';
	return (res);
}

char		*ft_itoa_base_unsigned(uintmax_t nbr, unsigned int base)
{
	char	*res;
	int		i;

	if (base < 2 || base > 16
		|| !(res = ft_strnew(34)))
		return (NULL);
	i = 0;
	calc_unsigned(nbr, base, &i, res);
	res[i] = '\0';
	return (res);
}
