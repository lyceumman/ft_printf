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

unsigned int count_active_bits(unsigned int nbr)
{
    int i;

    i = 32;
    while (--i >= 0)
        if ((nbr >> i) & 1)
            return ((unsigned)i + 1);
    return (0);
}

int			nbr_len(int n)
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

static void	calc_extended(intmax_t nbr, int base, int *i, char *res)
{
	char	*digit;

	digit = "0123456789ABCDEF";
	if (ABS(nbr) >= base)
		calc_extended(nbr / base, base, i, res);
	res[(*i)++] = digit[ABS(nbr % base)];
}

static void	calc(int nbr, int base, int *i, char *res)
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

char		*ft_itoa_base(int nbr, int base)
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
	char *res;
	int i;

	if (base < 2 || base > 16
		|| !(res = ft_strnew(34)))
		return (NULL);
	i = 0;
	calc_unsigned(nbr, base, &i, res);
	res[i] = '\0';
	return (res);
}

int			what_char(char **s)
{
	if (**s == '\n' && (*s)++)
		return ((int)write(1, "\n", 1));
	if (**s == '\t' && (*s)++)
		return ((int)write(1, "\t", 1));
	if (**s == '\v' && (*s)++)
		return ((int)write(1, "\v", 1));
	if (**s == '\f' && (*s)++)
		return ((int)write(1, "\f", 1));
	if (**s == '\r' && (*s)++)
		return ((int)write(1, "\r", 1));
	if (**s == '\b' && (*s)++)
		return ((int)write(1, "\b", 1));
	return (0);
}
