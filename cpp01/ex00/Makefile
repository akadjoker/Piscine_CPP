# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 11:14:42 by lrosa-do          #+#    #+#              #
#    Updated: 2023/02/04 10:00:15 by lrosa-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Zombie

SRCS		=	Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp \
				main.cpp
SRC_PATH 	=  src/
OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})

OBJS_DIR	=	obj
SRCS_DIR	=	src
INCLUDES	=	include

CC			=	c++
CPPFLAGS	=	-g -std=c++98 -Wall -Werror -Wextra -fsanitize=address -I$(INCLUDES)
RM			=	rm -rf
MKDIR		=	mkdir -p







all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
			@echo "Linked executable \033[38;2;39;154;186m$(NAME)\033[0m"
			@./$(NAME) | cat -e

${OBJS_DIR}/%.o: 	${SRCS_DIR}/%.cpp	${INCLUDES}
			@${MKDIR} $(@D)
			@$(CC) $(CPPFLAGS) -c $< -o $@
			@echo "\e[91m" " Compile " "\e[0m ($<)" "\e[91m" "  object" "\e[0m ($@)"

clean:
			@$(RM) $(OBJS)
			@echo "\e[91m" " Clean  obs" "\e[0m"

fclean:		clean
			@$(RM) $(NAME)
			@echo "\e[91m" " Delete executable" "\e[0m"

re:			fclean all

.PHONY:		fclean, all, re
