/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_conv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 16:01:53 by oleshche          #+#    #+#             */
/*   Updated: 2018/02/24 16:03:24 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

intmax_t	*choose_size_n(t_buf *curr, va_list ap)
{
	intmax_t	*nbr;

	if (curr->h == 1)
		nbr = (intmax_t*)va_arg(ap, short*);
	else if (curr->h == 2)
		nbr = (intmax_t*)va_arg(ap, signed char*);
	else if (curr->l == 1)
		nbr = va_arg(ap, long*);
	else if (curr->l == 2)
		nbr = (intmax_t*)va_arg(ap, long long*);
	else if (curr->j == 1)
		nbr = va_arg(ap, intmax_t*);
	else if (curr->z == 1)
		nbr = (intmax_t*)va_arg(ap, long long*);
	else
		nbr = (intmax_t*)va_arg(ap, int*);
	return (nbr);
}

int			n_con_spec(intmax_t *nbr, int ret)
{
	*nbr = ret;
	return (0);
}
