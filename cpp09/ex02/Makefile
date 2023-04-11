# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/10 18:55:15 by lrosa-do          #+#    #+#              #
#    Updated: 2023/04/11 09:35:08 by lrosa-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME            = PmergeMe

SRCS			= main.cpp PmergeMe.cpp
OBJS			= $(SRCS:.cpp=.o)

HEADS           = -I .

RM              = rm -f

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

run:
	@echo "---------------------------------------"
	@./$(NAME) 3 5 9 7 4 | cat -e
	@echo "---------------------------------------"
	@./$(NAME) 3 5 9 7 4 2147483648 | cat -e
	@echo "---------------------------------------"
	@./$(NAME) `shuf -i 1-100000 -n 4000 | tr "\n" " "`
	@echo "---------------------------------------"
	
	


	

.PHONY:		all clean fclean re run
