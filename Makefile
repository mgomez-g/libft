# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 15:49:49 by manuelgomez       #+#    #+#              #
#    Updated: 2023/04/18 17:59:11 by manuelgomez      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I .

RM = rm -f

SRC = ft_strlen.c \
	  ft_toupper.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_bzero.c \
	  ft_atoi.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memset.c \
	  ft_memcmp.c
	  
	  
	  
	  
	  
	  
OBJ =  $(SRC:.c=.o)

BONUS = ft_lstnew.c

BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME)

bonus: $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
