# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 21:38:22 by cskipjac          #+#    #+#              #
#    Updated: 2022/11/14 00:15:02 by cskipjac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CLFAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f -r

PREF_SRC = ./src/
PREF_OBJ = ./obj/


SRCS = $(wildcard $(PREF_SRC)*.cpp)
OBJS = $(SRCS:$(PREF_SRC)%.cpp=$(PREF_OBJ)%.o)

all: $(NAME)
		@echo "Make done"

$(NAME): $(shell mkdir -p obj) $(OBJS)
		$(CC) $(CLFAGS) $(OBJS) -o $(NAME)

$(PREF_OBJ)%.o: $(PREF_SRC)%.cpp
		$(CC) $(CLFAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)
		@echo "Make clean done"

fclean: clean
		$(RM) $(NAME)
		$(RM) $(PREF_OBJ)
		@echo "Make fclean done"

re: fclean all

.PHONY :	all clean fclean re