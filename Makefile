# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iremturen <iremturen@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/03 16:07:16 by ituren            #+#    #+#              #
#    Updated: 2025/06/22 23:05:17 by iremturen        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.c	ft_isalnum.c   ft_isdigit.c  ft_memcmp.c   ft_memset.c  ft_strlcat.c  ft_strncmp.c  ft_tolower.c \
ft_bzero.c   ft_isalpha.c  ft_isprint.c  ft_memcpy.c   ft_strchr.c  ft_strlcpy.c  ft_strnstr.c  ft_toupper.c \
ft_calloc.c  ft_isascii.c  ft_memchr.c   ft_memmove.c  ft_strdup.c  ft_strlen.c   ft_strrchr.c  

OBJS= $(SRCS:.c=.o)


BONUS	=	ft_lstadd_back_bonus.c  ft_lstadd_front_bonus.c  ft_lstclear_bonus.c \
ft_lstdelone_bonus.c  ft_lstiter_bonus.c ft_lstlast_bonus.c \	
ft_lstmap_bonus.c  ft_lstnew_bonus.c  ft_lstsize_bonus.c

BONUS_OBJS		= $(BONUS:.c=.o)

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

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re
