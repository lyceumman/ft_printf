/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wchar_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 16:55:31 by oleshche          #+#    #+#             */
/*   Updated: 2018/03/17 16:55:34 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** 0xxxxxxx
** 110xxxxx 10xxxxxx
** 1110xxxx 10xxxxxx 10xxxxxx
** 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
*/

static int			two_bytes_char(unsigned int v)
{
	unsigned char	octet1;
	unsigned char	octet2;
	unsigned char	octet;
	unsigned int	mask1;

	mask1 = MASK1;
	octet2 = (unsigned char)((v << 26) >> 26);
	octet1 = (unsigned char)(((v >> 6) << 27) >> 27);
	octet = (unsigned char)(MASK1 >> 8) | octet1;
	write(1, &octet, 1);
	octet = (unsigned char)((mask1 << 24) >> 24) | octet2;
	write(1, &octet, 1);
	return (2);
}

static int			three_bytes_char(unsigned int v)
{
	unsigned char	octet1;
	unsigned char	octet2;
	unsigned char	octet3;
	unsigned char	octet;
	unsigned int	mask2;

	mask2 = MASK2;
	octet3 = (unsigned char)((v << 26) >> 26);
	octet2 = (unsigned char)(((v >> 6) << 26) >> 26);
	octet1 = (unsigned char)(((v >> 12) << 28) >> 28);
	octet = (unsigned char)((mask2 >> 16) | octet1);
	write(1, &octet, 1);
	octet = (unsigned char)(((mask2 << 16) >> 24) | octet2);
	write(1, &octet, 1);
	octet = (unsigned char)(((mask2 << 24) >> 24) | octet3);
	write(1, &octet, 1);
	return (3);
}

static int			four_bytes_char(unsigned int v)
{
	unsigned char	octet1;
	unsigned char	octet2;
	unsigned char	octet3;
	unsigned char	octet4;
	unsigned char	octet;

	octet4 = (unsigned char)((v << 26) >> 26);
	octet3 = (unsigned char)(((v >> 6) << 26) >> 26);
	octet2 = (unsigned char)(((v >> 12) << 26) >> 26);
	octet1 = (unsigned char)(((v >> 18) << 29) >> 29);
	octet = (unsigned char)((MASK3 >> 24) | octet1);
	write(1, &octet, 1);
	octet = (unsigned char)(((MASK3 << 8) >> 24) | octet2);
	write(1, &octet, 1);
	octet = (unsigned char)(((MASK3 << 16) >> 24) | octet3);
	write(1, &octet, 1);
	octet = (unsigned char)(((MASK3 << 24) >> 24) | octet4);
	write(1, &octet, 1);
	return (4);
}

int					ft_putwchar(wchar_t value)
{
	unsigned int	v;
	unsigned int	size;
	unsigned char	octet;

	v = (unsigned int)value;
	size = count_active_bits(v);
	if (size <= 7)
	{
		octet = (unsigned char)value;
		write(1, &octet, 1);
		return (1);
	}
	else if (size <= 11)
		return (two_bytes_char(v));
	else if (size <= 16)
		return (three_bytes_char(v));
	else
		return (four_bytes_char(v));
}
