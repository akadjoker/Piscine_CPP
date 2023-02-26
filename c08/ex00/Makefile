# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 17:33:17 by lrosa-do          #+#    #+#              #
#    Updated: 2023/02/26 12:39:16 by lrosa-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME	=	easyfind


CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -g -std=c++98 -fsanitize=address

SRC		=	main.cpp 

OBJ		:=	$(addprefix ./obj/,$(SRC:%.cpp=%.o))


RM		=	rm -rf

all: $(NAME)



./obj/%.o: ./%.cpp
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	./$(NAME)

clean:
	$(RM) obj/

fclean:
	@$(RM) obj/
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re