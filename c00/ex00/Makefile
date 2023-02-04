# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 18:22:02 by lrosa-do          #+#    #+#              #
#    Updated: 2023/02/04 08:05:34 by lrosa-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		megaphone

CXX =		clang++
CFLAGS =	-g -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRCS =		$(NAME).cpp

OBJS =		$(SRCS:%.cpp=%.o)

all: $(NAME)

clean:
			$(RM) $(OBJS) 

fclean:		clean
			$(RM) $(NAME)

run:
	@./$(NAME) "shhhhh... I think the students are asleep..."
	@./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@./$(NAME) 
	

re:			fclean $(NAME)

.PHONY:		all clean fclean re

$(NAME):	$(SRCS)
	$(CXX) $(CFLAGS) $(SRCS) -o $(NAME)
