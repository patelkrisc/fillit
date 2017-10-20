# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpatel <patelkrisc@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/20 12:51:19 by kpatel            #+#    #+#              #
#    Updated: 2017/10/20 12:55:16 by kpatel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

RL = ranlib

DEL = rm -f

HDR = /fillit.H

SRC = fillmain.c\
	  fillcheck.c\
	  fillvalid.c\
	  fillsolve.c\

$(NAME):
	@echo "[Creating object files and libft.a file...]"
	@$(CC) $(CFLAGS) -c $(SRC) -I $(HDR)
	@$(AR) $(NAME) $(OBJ)
	@$(RL) $(NAME)
	@echo "[Object files created!]"
	@echo "[fillit created!]"

all: $(NAME)

clean:
	@echo "[Removing *.o files...]"
	@$(DEL) $(OBJ)
	@echo "[*.o files removed!]"

fclean: clean
	@echo "[Removing libft.a file]"
	@$(DEL) $(NAME)
	@echo "[fillit removed!]"

re: fclean all