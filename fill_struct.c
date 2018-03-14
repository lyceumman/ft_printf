/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_spec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 13:58:44 by oleshche          #+#    #+#             */
/*   Updated: 2018/01/16 13:59:17 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	con_spec(t_buf *curr, char **s)
{
	curr->con_chr = **s;
    if (**s)
        (*s)++;
}

void    afterflags(t_buf *curr, char **s)
{
	while (ft_strchr(".123456789", **s))
        (*s)++;
    while (ft_strchr("+#0 ", **s) && **s)
    {
        if (**s == '#')
            curr->dash++;
        if (**s == '+')
            curr->plus++;
        (*s)++;
    }
}

void	miss_trash(t_buf *curr, char **s)
{
	while (ft_strchr("0123456789+-#.", **s) && **s != 0)
		(*s)++;
	if (curr->zero > 1)
		curr->zero = 0;
	if (curr->dash > 1)
		curr->dash = 0;
	if (curr->plus > 1)
		curr->plus = 0;
	if (curr->minus > 1)
		curr->minus = 0;
	if (curr->space > 1)
		curr->space = 0;
}

void    fill_struct(char **s, t_buf *curr)
{
	(*s)++;
	fill_arg_index(*s, curr);
	if (curr->arg_index)
		*s += nbr_len(curr->arg_index) + 1;
	*s += fill_flags(curr, *s);
	*s += fill_width_prn(curr, *s);
	fill_len_mod(curr, s);
	if (!ft_strchr("sSpdDioOuUxXcC%", **s))
	{
		afterflags(curr, s);
		miss_trash(curr, s);
	}
	con_spec(curr, s);
}

void	fill_arg_index(char *s, t_buf *curr)
{
	char	*str;

	str = s;
	while (ft_isdigit(*str))
		str++;
	if (*str == '$')
		curr->arg_index = ft_atoi(s);
	else
		curr->arg_index = 0;
}

int		fill_flags(t_buf *curr, char *s)
{
	curr->dash = 0;
	curr->zero = 0;
	curr->minus = 0;
	curr->space = 0;
	curr->plus = 0;
	while (ft_strchr("#0- +", *s))
	{
		if (*s == '#')
			curr->dash++;
		if (*s == '0')
			curr->zero++;
		if (*s == '-')
			curr->minus++;
		if (*s == ' ')
			curr->space++;
		if (*s == '+')
			curr->plus++;
		s++;
	}
	return (curr->dash + curr->zero + curr->minus + curr->space + curr->plus);
}

int		fill_width_prn(t_buf *curr, char *s)
{
	int	len;

    len = 0;
    if (ft_atoi(s))
	{
		curr->width = (size_t)ft_atoi(s);
		len = nbr_len((int)curr->width);
	}
	else
	    curr->width = 0;
	s += len;
	if (*s == '.' && ft_strchr("sSpdDioOuUxXcC%#0- +.123456789", *(s + 1)) && ++len)
	{
		s++;
		curr->prn = ft_atoi(s);
        if (*s == '0')
            len++;
		if (curr->prn)
			len += nbr_len(curr->prn);
	}
	else
		curr->prn = -1;
	return (len);
}

void		fill_len_mod(t_buf *curr, char **s)
{
	curr->h = 0;
	curr->l = 0;
	curr->j = 0;
	curr->z = 0;
    while (*s)
	{
		if (!ft_strncmp(*s, "hh", 2) && (*s += 2))
			curr->h = 2;
		else if (!ft_strncmp(*s, "h", 1) && (*s)++)
			curr->h = 1;
		else if (!ft_strncmp(*s, "ll", 2) && (*s += 2))
			curr->l = 2;
		else if (!ft_strncmp(*s, "l", 1) && (*s)++)
			curr->l = 1;
		else if (!ft_strncmp(*s, "j", 1) && (*s)++)
			curr->j = 1;
		else if (!ft_strncmp(*s, "z", 1) && (*s)++)
			curr->z = 1;
		else
			break ;
	}
}
