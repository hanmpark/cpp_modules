# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 16:04:48 by hanmpark          #+#    #+#              #
#    Updated: 2023/11/30 16:43:48 by hanmpark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ---------------------------------- Colors ---------------------------------- #
CYAN = \033[38;5;117m
ROSE = \033[38;5;169m
BOLD = \033[1m
CUR = \033[3m
DEF = \033[0m

# --------------------------------- Compiler --------------------------------- #
SOURCES_PATH = ./src/
SOURCES = ${addprefix ${SOURCES_PATH}, main.cpp \
										AAnimal.cpp \
										Cat.cpp \
										Dog.cpp \
										WrongAnimal.cpp \
										WrongCat.cpp \
										Brain.cpp}

OBJECTS = ${SOURCES:.cpp=.o}

%.o: %.cpp
	@${CC} ${CFLAGS} -I ${INC_PATH} -c $< -o $@

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC_PATH = ./inc/

# ---------------------------------- Rules ----------------------------------- #
NAME = Abstract
RM = rm -rf

all: ${NAME}

${NAME}: ${OBJECTS}
	@printf "${CYAN}Compiled ${BOLD}${CUR}${NAME}${DEF}\n"
	@${CC} ${CFLAGS} ${OBJECTS} -o ${NAME}

clean:
	@printf "${ROSE}Deleted object files${DEF}\n"
	@${RM} ${OBJECTS}

fclean: clean
	@printf "${ROSE}Deleted ${BOLD}${CUR}${NAME}${DEF}\n"
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re