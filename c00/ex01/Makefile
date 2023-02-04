# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 18:09:44 by lrosa-do          #+#    #+#              #
#    Updated: 2023/02/04 08:20:00 by lrosa-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		annuaire

CFLAGS =	-g -Wall -Werror -Wextra -std=c++98 -fsanitize=address
CC	= g++

RM	= rm -rf

SRCS =	Contact.cpp main.cpp
		


OBJS = $(SRCS:.cpp=.o)
$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
			./$(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

PHONY:		all clean fclean re
