# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 08:32:41 by lrosa-do          #+#    #+#              #
#    Updated: 2023/02/11 08:32:42 by lrosa-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #




SRCS		=	AAnimal.cpp			\
				Dog.cpp				\
				Cat.cpp				\
				WrongCat.cpp		\
				WrongAnimal.cpp		\
				Brain.cpp			\
				functions.cpp

OBJS		=	$(addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o})

OBJS_DIR	=	objects
SRCS_DIR	=	srcs

INCLUDES	=	includes/AAnimal.hpp			\
				includes/Dog.hpp			\
				includes/Cat.hpp			\
				includes/WrongCat.hpp		\
				includes/WrongAnimal.hpp	\
				includes/Brain.hpp          \
				includes/project.h

CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

LIBINCLUDES	=	-Iincludes

LIB			=	animal.a

EXEC		=	Abstract

RM			=	rm -rf

MKDIR		=	mkdir -p

all:		${EXEC}

${OBJS_DIR}/%.o: 	${SRCS_DIR}/%.cpp	${INCLUDES} Makefile
			${MKDIR} $(@D)
			${CC} ${CFLAGS} ${LIBINCLUDES} -c $< -o $@

$(LIB):		${OBJS} ${INCLUDES}
			ar rcs ${LIB} ${OBJS}


${EXEC}:	main.cpp ${LIB}
			$(CC) ${CFLAGS} ${LIBINCLUDES} main.cpp ${EXECINCLUDES} ${LIB} -o ${EXEC}

clean:
			${RM} ${OBJS} $(OBJS_DIR)

fclean:		clean
			${RM} ${LIB} ${EXEC} ${LIB} ${EXEC}.dSYM

re:			fclean all

.PHONY: 	all clean fclean re object