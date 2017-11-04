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
	@echo "[Creating object files and fillit file...]"
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
	@echo "[Removing fillit file]"
	@$(DEL) $(NAME)
	@echo "[fillit removed!]"

re: fclean all
