# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/20 12:51:19 by kpatel            #+#    #+#              #
#    Updated: 2017/11/03 18:43:31 by kpatel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

RL = ranlib

DEL = rm -f

HDR = /fillit.h

SRC = main.c\
	  mgen.c\

OBJ = $(SRC:.c=.0)

$(NAME):
	@echo "\033[32m---Creating object files and fillit file...---\033[0m"
	@$(CC) $(CFLAGS) -c $(SRC) -I $(HDR)
	@$(AR) $(NAME) $(OBJ)
	@$(RL) $(NAME)
	@echo "\033[32m---Object files created!---\033[0m"
	@echo "\033[32m---fillit created!---\033[0m"

all: $(NAME)

clean:
	@echo "\033[33m---Removing *.o files...---\033[0m"
	@$(DEL) $(OBJ)
	@echo "\033[33m---*.o files removed!---\033[0m"

fclean: clean
	@echo "\033[31m---Removing fillit file---\033[0m"
	@$(DEL) $(NAME)
	@echo "\033[31m---fillit removed!---\033[0m"

re: fclean all
