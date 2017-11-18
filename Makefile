# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/20 12:51:19 by kpatel            #+#    #+#              #
#    Updated: 2017/11/17 02:04:44 by wwalker          ###   ########.fr        #
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
	  read.c\
	  check.c\
	  store.c\
#	  validate.c\

OBJ = $(SRC:.c=.0)

LIBFT = libft/

COMPL = make -C $(LIBFT) re

LCL = make -C $(LIBFT) clean

LFCL = make -C $(LIBFT) fclean

$(NAME):
	@echo "\033[32m---Creating object files and fillit file...---\033[0m"
	@$(COMPL)
	@$(CC) $(CFLAGS) $(SRC) -I $(HDR) libft/libft.a -o $(NAME) -g
	@echo "\033[32m---Object files created!---\033[0m"
	@echo "\033[32m---fillit created!---\033[0m"

all: $(NAME)

clean:
	@echo "\033[33m---Removing *.o files...---\033[0m"
	@$(LCL)
	@$(DEL) $(OBJ)
	@echo "\033[33m---*.o files removed!---\033[0m"

fclean: clean
	@echo "\033[31m---Removing fillit file---\033[0m"
	@$(LFCL)
	@$(DEL) $(NAME)
	@echo "\033[31m---fillit removed!---\033[0m"

re: fclean all
