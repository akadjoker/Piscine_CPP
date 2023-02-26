# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 17:33:17 by lrosa-do          #+#    #+#              #
#    Updated: 2023/02/26 12:03:20 by lrosa-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	myarray

NAME = array
INC = ./include
SRC = $(shell find src/*.cpp)
OBJ = $(SRC:.cpp=.o)

CC = c++
CFLAGS = -std=c++98 -g -Wall -Wextra -Wall -fsanitize=address 
RM = rm -rf

%.o: %.cpp
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@
	./$(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: $(NAME)
	@./$(NAME)

.PHONY: all, clean, fclean, re