# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ituren <ituren@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/03 16:07:16 by ituren            #+#    #+#              #
#    Updated: 2025/06/03 17:47:41 by ituren           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c    ft_isalnum.c  ft_isdigit.c  ft_memcmp.c   ft_memset.c  ft_strlcat.c  ft_strncmp.c  ft_tolower.c \
ft_bzero.c   ft_isalpha.c  ft_isprint.c  ft_memcpy.c   ft_strchr.c  ft_strlcpy.c  ft_strnstr.c  ft_toupper.c \
ft_calloc.c  ft_isascii.c  ft_memchr.c   ft_memmove.c  ft_strdup.c  ft_strlen.c   ft_strrchr.c  

OBJS= $(SRCS:.c=.o)

NAME = libft.a

RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
ar rcs $(NAME) $(OBJS)

clean: $(RM) $(OBJS)

fclean: clean $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
