# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 11:14:42 by lrosa-do          #+#    #+#              #
#    Updated: 2023/02/05 09:06:09 by lrosa-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CPPFLAGS	=	-g -std=c++98 -Wall -Werror -Wextra -fsanitize=address
RM = rm -f

NAME = replace
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all = $(NAME)

$(NAME):
		$(CC) $(SRCS) $(CPPFLAGS) -o $(NAME)
		
	
clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re