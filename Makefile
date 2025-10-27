# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdiniz-l <pdiniz-l@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 13:16:18 by pdiniz-l          #+#    #+#              #
#    Updated: 2025/10/24 17:07:56 by pdiniz-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program

LIBFT = libft.a

INCLUDE = libft.h

MY_SOURCES = ft_isalpha.c \
	     ft_isdigit.c \
	     ft_isalnum.c \
	     ft_isascii.c \
	     ft_isprint.c \
	     ft_strlen.c \
	     ft_memset.c \
	     ft_bzero.c \
	     ft_memcpy.c \
	     ft_memmove.c \
	     ft_strlcpy.c \
	     ft_strlcat.c \
	     ft_toupper.c \
	     ft_tolower.c \
	     ft_strchr.c \
	     ft_strrchr.c \
	     ft_strncmp.c \
	     ft_memchr.c \
	     ft_memcmp.c \
	     ft_strnstr.c \
	     ft_atoi.c \
	     ft_calloc.c \
	     ft_strdup.c \
	     ft_substr.c \
	     ft_strjoin.c \
	     ft_strtrim.c \
	     ft_split.c \
	     ft_itoa.c \
	     ft_strmapi.c \
	     ft_striteri.c \
	     ft_putchar_fd.c \
	     ft_putstr_fd.c \
	     ft_putendl_fd.c \
	     ft_putnbr_fd.c

MY_BONUS = ft_lstnew.c \
	   ft_lstadd_front.c \
	   ft_lstsize.c \
	   ft_lstlast.c \
	   ft_lstadd_back.c \
	   ft_lstdelone.c \
	   ft_lstclear.c \
	   ft_lstiter.c \
	   ft_lstmap.c
	   

MY_OBJECTS = $(MY_SOURCES:.c=.o)

MY_BONUS_OBJECTS = $(MY_BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.c.o: 
	cc $(CFLAGS) -c $< -o $@ -I $(INCLUDE)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar -rcs $(LIBFT) $(MY_OBJECTS)

bonus:  $(MY_OBJECTS) $(MY_BONUS_OBJECTS)
	ar -rcs $(LIBFT) $(MY_OBJECTS) $(MY_BONUS_OBJECTS)

clean: 
	rm -rf $(MY_OBJECTS) $(MY_BONUS_OBJECTS)

fclean: clean
	rm -rf $(LIBFT)

re: fclean all bonus 


