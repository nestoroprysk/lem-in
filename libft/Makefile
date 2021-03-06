# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshiling <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/02 13:01:36 by sshiling          #+#    #+#              #
#    Updated: 2017/11/02 20:19:18 by noprysk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	libft/ft_atoi.c \
		libft/ft_bzero.c \
		libft/ft_isalnum.c \
		libft/ft_isalpha.c \
		libft/ft_isascii.c \
		libft/ft_isdigit.c \
		libft/ft_isprint.c \
		libft/ft_itoa.c \
		libft/ft_lstadd.c \
		libft/ft_lstdel.c \
		libft/ft_lstdelone.c \
		libft/ft_lstiter.c \
		libft/ft_lstmap.c \
		libft/ft_lstnew.c \
		libft/ft_memalloc.c \
		libft/ft_memccpy.c \
		libft/ft_memchr.c \
		libft/ft_memcmp.c \
		libft/ft_memcpy.c \
		libft/ft_memdel.c \
		libft/ft_memmove.c \
		libft/ft_memset.c \
		libft/ft_omit.c \
		libft/ft_putchar.c \
		libft/ft_putchar_fd.c \
		libft/ft_putendl.c \
		libft/ft_putendl_fd.c \
		libft/ft_putnbr.c \
		libft/ft_putnbr_fd.c \
		libft/ft_putstr.c \
		libft/ft_putstr_fd.c \
		libft/ft_replace.c \
		libft/ft_strcat.c \
		libft/ft_strchr.c \
		libft/ft_strclr.c \
		libft/ft_strcmp.c \
		libft/ft_strcpy.c \
		libft/ft_strdel.c \
		libft/ft_strdup.c \
		libft/ft_strequ.c \
		libft/ft_striter.c \
		libft/ft_striteri.c \
		libft/ft_strjoin.c \
		libft/ft_strlcat.c \
		libft/ft_strlen.c \
		libft/ft_strmap.c \
		libft/ft_strmapi.c \
		libft/ft_strncat.c \
		libft/ft_strncmp.c \
		libft/ft_strncpy.c \
		libft/ft_strnequ.c \
		libft/ft_strnew.c \
		libft/ft_strnstr.c \
		libft/ft_stromit.c \
		libft/ft_strrchr.c \
		libft/ft_strsplit.c \
		libft/ft_strstr.c \
		libft/ft_strsub.c \
		libft/ft_strtrim.c \
		libft/ft_toarray.c \
		libft/ft_tolist.c \
		libft/ft_tolower.c \
		libft/ft_toupper.c \
		libft/get_next_line.c \
		ft_flags1.c \
		ft_flags2.c \
		ft_flags3.c \
		ft_on.c \
		ft_magic.c \
		ft_mitoa_umitoa.c \
		ft_printf.c \
		ft_specs1.c \
		ft_specs2.c \
		ft_specs3.c \
		ft_unicode1.c \
		ft_unicode2.c \
		ft_format.c

HEADER = ft.h

OBJECTS = ft_atoi.o \
		ft_bzero.o \
		ft_isalnum.o \
		ft_isalpha.o \
		ft_isascii.o \
		ft_isdigit.o \
		ft_isprint.o \
		ft_itoa.o \
		ft_lstadd.o \
		ft_lstdel.o \
		ft_lstdelone.o \
		ft_lstiter.o \
		ft_lstmap.o \
		ft_lstnew.o \
		ft_memalloc.o \
		ft_memccpy.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_memcpy.o \
		ft_memdel.o \
		ft_memmove.o \
		ft_memset.o \
		ft_omit.o \
		ft_putchar.o \
		ft_putchar_fd.o \
		ft_putendl.o \
		ft_putendl_fd.o \
		ft_putnbr.o \
		ft_putnbr_fd.o \
		ft_putstr.o \
		ft_putstr_fd.o \
		ft_replace.o \
		ft_strcat.o \
		ft_strchr.o \
		ft_strclr.o \
		ft_strcmp.o \
		ft_strcpy.o \
		ft_strdel.o \
		ft_strdup.o \
		ft_strequ.o \
		ft_striter.o \
		ft_striteri.o \
		ft_strjoin.o \
		ft_strlcat.o \
		ft_strlen.o \
		ft_strmap.o \
		ft_strmapi.o \
		ft_strncat.o \
		ft_strncmp.o \
		ft_strncpy.o \
		ft_strnequ.o \
		ft_strnew.o \
		ft_strnstr.o \
		ft_stromit.o \
		ft_strrchr.o \
		ft_strsplit.o \
		ft_strstr.o \
		ft_strsub.o \
		ft_strtrim.o \
		ft_toarray.o \
		ft_tolist.o \
		ft_tolower.o \
		ft_toupper.o \
		get_next_line.o \
		ft_flags1.o \
		ft_flags2.o \
		ft_flags3.o \
		ft_on.o \
		ft_magic.o \
		ft_mitoa_umitoa.o \
		ft_printf.o \
		ft_specs1.o \
		ft_specs2.o \
		ft_specs3.o \
		ft_unicode1.o \
		ft_unicode2.o \
		ft_format.o

FLAGS = -Wall -Werror -Wextra

CC = gcc

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) -c $(SRCS) -I $(HEADER)
	@ar rc $(NAME) $(OBJECTS)

%.o: %.c $(HEADER)
	@$(CC) $(FLAGS) -c $<

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean
.NOTPARALLEL: all ($NAME) re clean fclean
