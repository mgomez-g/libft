# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 15:49:49 by manuelgomez       #+#    #+#              #
#    Updated: 2023/04/14 17:36:12 by manuelgomez      ###   ########.fr        #
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
