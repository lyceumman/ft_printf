/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 19:05:43 by oleshche          #+#    #+#             */
/*   Updated: 2017/12/27 19:05:51 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	main_magic(va_list ap, char **s, int *ret)
{
	t_buf	curr;
	int		len;

	fill_struct(s, &curr);
	len = choose_type(&curr, ap, *ret);
	if (len == -1)
		*ret = -1;
	else
		*ret += len;
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

int			ft_printf(const char *restrict format, ...)
{
	int		ret;
	va_list	ap;
	char	*str;

	va_start(ap, format);
	str = (char*)format;
	ret = 0;
	while (*str)
	{
		if (ret == -1)
			return (ret);
		if (*str == '%' && !*(str + 1))
			str++;
		else if (*str == '%')
			main_magic(ap, &str, &ret);
		else if (what_char(&str))
			ret++;
		else if (*str != '%' && (++ret))
			ft_putchar(*str++);
		else
			str++;
	}
	va_end(ap);
	return (ret);
}
