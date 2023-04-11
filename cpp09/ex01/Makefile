# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/05 18:36:47 by lrosa-do          #+#    #+#              #
#    Updated: 2023/04/11 09:53:55 by lrosa-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS			= main.cpp RPN.cpp

OBJS			= $(SRCS:.cpp=.o)

NAME            = RPN
CC				= c++
RM              = rm -f
HEADS 			= -I.

CXX				= c++

CXXFLAGS          = -Wall -Wextra -Werror -std=c++98 -pedantic -g -fsanitize=address

.cpp.o:
			$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o) $(HEADS)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:     clean
			$(RM) $(NAME)

re:			fclean all

run:		all
			./$(NAME) "8 9 * 9 - 9 - 9 - 4 - 1 +" | cat -e
			./$(NAME) "7 7 * 7 -" | cat -e
			./$(NAME) "1 2 * 2 / 2 * 2 4 - +" | cat -e
			./$(NAME) "(1 + 1)" | cat -e
			./${NAME} "a a a a" | cat -e
			./${NAME} "0 3 /" | cat -e
			./${NAME} "3 0 /" | cat -e
			./${NAME} "3 0 +" | cat -e
			./${NAME} "3 0 *" | cat -e

.PHONY:		all clean fclean re run