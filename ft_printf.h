/* ********9****************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 19:17:43 by oleshche          #+#    #+#             */
/*   Updated: 2017/12/27 19:17:52 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define ABS(x) ((x) > 0 ? (x) : -(x))
# define MASK1 49280
# define MASK2 14712960
# define MASK3 4034953344

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <wchar.h>

int		        ft_printf(const char *restrict format, ...);
char			*ft_itoa_base(int nbr, int base);
int				nbr_len(int n);
int             what_char(char **s);
unsigned int    count_active_bits(unsigned int nbr);
int             ft_putwchar(wchar_t value);

typedef	struct	s_buf
{
	int		arg_index;
	int		dash;
	int		zero;
	int		minus;
	int		space;
	int		plus;
	size_t	width;
	int		prn;
	int		h;
	int		l;
	int		j;
	int		z;
    int     L;
    char	con_chr;
}				t_buf;

void            fill_struct(char **s, t_buf *curr);
int				fill_flags(t_buf *curr, char *s);
void            fill_arg_index(char *s, t_buf *curr);
int				fill_width_prn(t_buf *curr, char *s);
void			fill_len_mod(t_buf *curr, char **s);
int				choose_type(t_buf *curr, va_list ap, int ret);
void	        flag_manage(t_buf *curr, char **buf);
void            width_apply(t_buf *curr, char **buf);
void            plus_apply(char **buf);
void            space_apply(char **buf);
void			zero_apply(char **buf, t_buf *curr);
int             di_con_spec(t_buf *curr, char *buf);
int             s_con_spec(t_buf *curr, va_list ap);
char            *choose_size_di(t_buf *curr, va_list ap);
void            precision_apply(t_buf *curr, char **buf);
void            precision_s(int prn, char **buf);
char            *ft_itoa_base_extended(intmax_t nbr, int base);
char            *ft_itoa_base_unsigned(uintmax_t nbr, unsigned int base);
int             c_con_spec(t_buf *curr, va_list ap);
int             wchar_con_spec(t_buf *curr, va_list ap);
char            *choose_size_o(t_buf *curr, va_list ap);
int             o_con_spec(t_buf *curr, char *buf);
char			*choose_size_x(t_buf *curr, va_list ap);
int				x_con_spec(t_buf *curr, char *buf);
void			dash_apply(t_buf *curr, char **buf);
int				u_con_spec(t_buf *curr, char *buf);
char			*choose_size_u(t_buf *curr, va_list ap);
int             s_wchar_con(t_buf *curr, va_list ap);
size_t          ft_putwcs(wchar_t *s);
void            wcs_precision(wchar_t **buf, size_t size);
size_t          ft_wcslen(const wchar_t *str);
int             ft_wchar_size(wchar_t value);
int             n_con_spec(intmax_t *nbr, int ret);
intmax_t        *choose_size_n(t_buf *curr, va_list ap);
wchar_t         *ft_wcsdup(const wchar_t *s1);
wchar_t         *ft_wcsncpy(wchar_t *dst, const wchar_t *src, size_t len);
void			*ft_wcsset(void *b, int c, size_t len);
size_t          ft_wcssize(wchar_t *s);
wchar_t			*wcs_width(t_buf *curr, wchar_t *buf);
int             print_if_zero(t_buf *curr, char **buf, int checker);
void            x_zero_apply(t_buf *curr, char **buf);
int				percent_spec(t_buf *curr);
int				pointer_spec(t_buf *curr, va_list ap);
int     		invalid_con_spec(t_buf *curr);

#endif
