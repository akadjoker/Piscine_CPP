# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 11:14:42 by lrosa-do          #+#    #+#              #
#    Updated: 2023/02/21 15:04:33 by lrosa-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	scalar


OBJS_DIR	=	obj
SRCS_DIR	=	src
INCLUDES	=	include

SRCS		=	main.cpp Conversion.cpp 
SRC_PATH 	=  src/
OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})


CC			=	c++
CPPFLAGS	=	-g -std=c++98 -Wall -Werror -Wextra -Wshadow -fsanitize=address -I$(INCLUDES)
RM			=	rm -rf
MKDIR		=	mkdir -p

all:		$(NAME)

$(NAME):	$(OBJS) 
			@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
			@echo "Linked executable \033[38;2;39;154;186m$(NAME)\033[0m"
			

${OBJS_DIR}/%.o: 	${SRCS_DIR}/%.cpp	${INCLUDES}
			@${MKDIR} $(@D)
			@$(CC) $(CPPFLAGS) -c $< -o $@
			@echo "\e[91m" " Compile " "\e[0m ($<)" "\e[91m" "  object" "\e[0m ($@)"
			

run:
	@echo "\e[91m" "Test 0" "\e[0m "
	@./$(NAME) 0 | cat -e
	@echo "\e[91m" "Test -2147483648" "\e[0m "
	@./$(NAME) -2147483648 | cat -e
	@echo "\e[91m" "Test -2147483647" "\e[0m "
	@./$(NAME) 2147483647 | cat -e
	@echo "\e[91m" "Test 2147483649" "\e[0m "
	@./$(NAME) 2147483649 | cat -e
	
	@echo "\e[91m" "Test nan" "\e[0m "
	@./$(NAME) nan | cat -e
	@echo "\e[91m" "Test nanf" "\e[0m "
	@./$(NAME) nanf | cat -e
	@echo "\e[91m" "Test 40.0f float" "\e[0m "
	@./$(NAME) 42.0f | cat -e
	@echo "\e[91m" "Test 40.0 double" "\e[0m"
	@./$(NAME) 42.0 | cat -e


clean:
			@$(RM) $(OBJS) $(OBJS_DIR)
			@echo "\e[91m" " Clean  obs" "\e[0m"

fclean:		clean
			@$(RM) $(NAME)
			@echo "\e[91m" " Delete executable" "\e[0m"

re:			fclean all

.PHONY:		fclean, all, re
