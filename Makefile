# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oleshche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/01 16:07:47 by oleshche          #+#    #+#              #
#    Updated: 2018/03/19 18:15:59 by oleshche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FUNC = 	ft_strcmp.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o             	\
		ft_memchr.o ft_memcmp.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o				\
		ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o ft_strncmp.o ft_atoi.o				\
		ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o			\
		ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o			\
		ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o				\
		ft_strsplit.o ft_itoa.o ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o ft_putchar_fd.o			\
		ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_lstdelone.o ft_lstnew.o ft_lstdel.o ft_lstadd.o	\
		ft_lstiter.o ft_lstmap.o ft_lstsplit.o ft_strrev.o ft_lstcount.o ft_lstaddback.o ft_isspace.o		\

SRC =	addition.o c_conv.o di_conv.o fill_struct.o flags.o ft_printf.o n_conv.o o_conv.o processing_conv.o\
		s_conv.o s_wchar_conv.o u_conv.o x_conv.o pointer_percent.o											\

CFLAGS = -c -Wall -Wextra -Werror

CC = gcc

LIBDIR = libft/

all: $(NAME)

$(NAME): $(FUNC) $(SRC)
	ar rc $(NAME) $(FUNC) $(SRC)
	ranlib $(NAME)

addition.o: addition.c
	gcc $(CFLAGS) addition.c

u_conv.o: u_conv.c
	gcc $(CFLAGS) u_conv.c

s_wchar_conv.o: s_wchar_conv.c
	gcc $(CFLAGS) s_wchar_conv.c

s_conv.o: s_conv.c
	gcc $(CFLAGS) s_conv.c

processing_conv.o: processing_conv.c
	gcc $(CFLAGS) processing_conv.c

o_conv.o: o_conv.c
	gcc $(CFLAGS) o_conv.c

n_conv.o: n_conv.c
	gcc $(CFLAGS) n_conv.c

ft_printf.o: ft_printf.c
	gcc $(CFLAGS) ft_printf.c

flags.o: flags.c
	gcc $(CFLAGS) flags.c

fill_struct.o: fill_struct.c
	gcc $(CFLAGS) fill_struct.c

di_conv.o: di_conv.c
	gcc $(CFLAGS) di_conv.c

x_conv.o: x_conv.c
	gcc $(CFLAGS) x_conv.c

c_conv.o: c_conv.c
	gcc $(CFLAGS) c_conv.c

pointer_percent.o: pointer_percent.c
	gcc $(CFLAGS) pointer_percent.c

ft_lstcount.o: $(LIBDIR)ft_lstcount.c
	gcc $(CFLAGS) $(LIBDIR)ft_lstcount.c

ft_strrev.o: $(LIBDIR)ft_strrev.c
	gcc $(CFLAGS) $(LIBDIR)ft_strrev.c

ft_lstmap.o: $(LIBDIR)ft_lstmap.c
	gcc $(CFLAGS) $(LIBDIR)ft_lstmap.c

ft_lstiter.o: $(LIBDIR)ft_lstiter.c
	gcc $(CFLAGS) $(LIBDIR)ft_lstiter.c

ft_lstadd.o: $(LIBDIR)ft_lstadd.c
	gcc $(CFLAGS) $(LIBDIR)ft_lstadd.c

ft_lstdelone.o: $(LIBDIR)ft_lstdelone.c
	gcc $(CFLAGS) $(LIBDIR)ft_lstdelone.c

ft_lstdel.o: $(LIBDIR)ft_lstdel.c
	gcc $(CFLAGS) $(LIBDIR)ft_lstdel.c

ft_lstaddback.o: $(LIBDIR)ft_lstaddback.c
	gcc $(CFLAGS) $(LIBDIR)ft_lstaddback.c

ft_lstsplit.o: $(LIBDIR)ft_lstsplit.c
	gcc $(CFLAGS) $(LIBDIR)ft_lstsplit.c

ft_lstnew.o: $(LIBDIR)ft_lstnew.c
	gcc $(CFLAGS) $(LIBDIR)ft_lstnew.c

ft_putnbr_fd.o: $(LIBDIR)ft_putnbr_fd.c
	gcc $(CFLAGS) $(LIBDIR)ft_putnbr_fd.c

ft_putendl_fd.o: $(LIBDIR)ft_putendl_fd.c
	gcc $(CFLAGS) $(LIBDIR)ft_putendl_fd.c

ft_putstr_fd.o: $(LIBDIR)ft_putstr_fd.c
	gcc $(CFLAGS) $(LIBDIR)ft_putstr_fd.c

ft_putchar_fd.o: $(LIBDIR)ft_putchar_fd.c
	gcc $(CFLAGS) $(LIBDIR)ft_putchar_fd.c

ft_putnbr.o: $(LIBDIR)ft_putnbr.c
	gcc $(CFLAGS) $(LIBDIR)ft_putnbr.c

ft_putendl.o: $(LIBDIR)ft_putendl.c
	gcc $(CFLAGS) $(LIBDIR)ft_putendl.c

ft_putstr.o: $(LIBDIR)ft_putstr.c
	gcc $(CFLAGS) $(LIBDIR)ft_putstr.c

ft_putchar.o: $(LIBDIR)ft_putchar.c
	gcc $(CFLAGS) $(LIBDIR)ft_putchar.c

ft_itoa.o: $(LIBDIR)ft_itoa.c
	gcc $(CFLAGS) $(LIBDIR)ft_itoa.c

ft_strsplit.o: $(LIBDIR)ft_strsplit.c
	gcc $(CFLAGS) $(LIBDIR)ft_strsplit.c

ft_strtrim.o: $(LIBDIR)ft_strtrim.c
	gcc $(CFLAGS) $(LIBDIR)ft_strtrim.c

ft_strjoin.o: $(LIBDIR)ft_strjoin.c
	gcc $(CFLAGS) $(LIBDIR)ft_strjoin.c

ft_strsub.o: $(LIBDIR)ft_strsub.c
	gcc $(CFLAGS) $(LIBDIR)ft_strsub.c

ft_strnequ.o: $(LIBDIR)ft_strnequ.c
	gcc $(CFLAGS) $(LIBDIR)ft_strnequ.c

ft_strequ.o: $(LIBDIR)ft_strequ.c
	gcc $(CFLAGS) $(LIBDIR)ft_strequ.c

ft_strmap.o: $(LIBDIR)ft_strmap.c
	gcc $(CFLAGS) $(LIBDIR)ft_strmap.c

ft_strmapi.o: $(LIBDIR)ft_strmapi.c
	gcc $(CFLAGS) $(LIBDIR)ft_strmapi.c

ft_striteri.o: $(LIBDIR)ft_striteri.c
	gcc $(CFLAGS) $(LIBDIR)ft_striteri.c

ft_striter.o: $(LIBDIR)ft_striter.c
	gcc $(CFLAGS) $(LIBDIR)ft_striter.c

ft_strclr.o: $(LIBDIR)ft_strclr.c
	gcc $(CFLAGS) $(LIBDIR)ft_strclr.c

ft_strdel.o: $(LIBDIR)ft_strdel.c
	gcc $(CFLAGS) $(LIBDIR)ft_strdel.c

ft_strnew.o: $(LIBDIR)ft_strnew.c
	gcc $(CFLAGS) $(LIBDIR)ft_strnew.c

ft_memdel.o: $(LIBDIR)ft_memdel.c
	gcc $(CFLAGS) $(LIBDIR)ft_memdel.c

ft_memalloc.o: $(LIBDIR)ft_memalloc.c
	gcc $(CFLAGS) $(LIBDIR)ft_memalloc.c

ft_tolower.o: $(LIBDIR)ft_tolower.c
	gcc $(CFLAGS) $(LIBDIR)ft_tolower.c

ft_toupper.o: $(LIBDIR)ft_toupper.c
	gcc $(CFLAGS) $(LIBDIR)ft_toupper.c

ft_isprint.o: $(LIBDIR)ft_isprint.c
	gcc $(CFLAGS) $(LIBDIR)ft_isprint.c

ft_isascii.o: $(LIBDIR)ft_isascii.c
	gcc $(CFLAGS) $(LIBDIR)ft_isascii.c

ft_isalnum.o: $(LIBDIR)ft_isalnum.c
	gcc $(CFLAGS) $(LIBDIR)ft_isalnum.c

ft_isdigit.o: $(LIBDIR)ft_isdigit.c
	gcc $(CFLAGS) $(LIBDIR)ft_isdigit.c

ft_isalpha.o: $(LIBDIR)ft_isalpha.c
	gcc $(CFLAGS) $(LIBDIR)ft_isalpha.c

ft_isspace.o: $(LIBDIR)ft_isspace.c
	gcc $(CFLAGS) $(LIBDIR)ft_isspace.c

ft_atoi.o: $(LIBDIR)ft_atoi.c
	gcc $(CFLAGS) $(LIBDIR)ft_atoi.c

ft_strncmp.o: $(LIBDIR)ft_strncmp.c
	gcc $(CFLAGS) $(LIBDIR)ft_strncmp.c

ft_strnstr.o: $(LIBDIR)ft_strnstr.c
	gcc $(CFLAGS) $(LIBDIR)ft_strnstr.c

ft_strstr.o: $(LIBDIR)ft_strstr.c
	gcc $(CFLAGS) $(LIBDIR)ft_strstr.c

ft_strcmp.o: $(LIBDIR)ft_strcmp.c
	gcc $(CFLAGS) $(LIBDIR)ft_strcmp.c

ft_strlen.o: $(LIBDIR)ft_strlen.c
	gcc $(CFLAGS) $(LIBDIR)ft_strlen.c

ft_memset.o: $(LIBDIR)ft_memset.c
	gcc $(CFLAGS) $(LIBDIR)ft_memset.c

ft_bzero.o: $(LIBDIR)ft_bzero.c
	gcc $(CFLAGS) $(LIBDIR)ft_bzero.c

ft_memcpy.o: $(LIBDIR)ft_memcpy.c
	gcc $(CFLAGS) $(LIBDIR)ft_memcpy.c

ft_memccpy.o: $(LIBDIR)ft_memccpy.c
	gcc $(CFLAGS) $(LIBDIR)ft_memccpy.c

ft_memmove.o: $(LIBDIR)ft_memmove.c
	gcc $(CFLAGS) $(LIBDIR)ft_memmove.c

ft_memchr.o: $(LIBDIR)ft_memchr.c
	gcc $(CFLAGS) $(LIBDIR)ft_memchr.c

ft_memcmp.o: $(LIBDIR)ft_memcmp.c
	gcc $(CFLAGS) $(LIBDIR)ft_memcmp.c

ft_strdup.o: $(LIBDIR)ft_strdup.c
	gcc $(CFLAGS) $(LIBDIR)ft_strdup.c

ft_strcpy.o: $(LIBDIR)ft_strcpy.c
	gcc $(CFLAGS) $(LIBDIR)ft_strcpy.c

ft_strncpy.o: $(LIBDIR)ft_strncpy.c
	gcc $(CFLAGS) $(LIBDIR)ft_strncpy.c

ft_strcat.o: $(LIBDIR)ft_strcat.c
	gcc $(CFLAGS) $(LIBDIR)ft_strcat.c

ft_strncat.o: $(LIBDIR)ft_strncat.c
	gcc $(CFLAGS) $(LIBDIR)ft_strncat.c

ft_strlcat.o: $(LIBDIR)ft_strlcat.c
	gcc $(CFLAGS) $(LIBDIR)ft_strlcat.c

ft_strchr.o: $(LIBDIR)ft_strchr.c
	gcc $(CFLAGS) $(LIBDIR)ft_strchr.c

ft_strrchr.o: $(LIBDIR)ft_strrchr.c
	gcc $(CFLAGS) $(LIBDIR)ft_strrchr.c

clean:
	/bin/rm -f $(FUNC) $(SRC)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
