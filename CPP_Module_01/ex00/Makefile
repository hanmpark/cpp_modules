# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 16:07:39 by hanmpark          #+#    #+#              #
#    Updated: 2023/09/04 17:22:42 by hanmpark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ---------------------------------- COLORS ---------------------------------- #
DEF = \033[0m
BOLD = \033[1m
CUR = \033[3m
UL = \033[4m
UP = \033[A

ORANGE = \033[38;5;216m
LBLUE = \033[38;5;153m
LYELLOW = \033[38;5;228m
LPURPLE = \033[38;5;189m
LGREEN = \033[38;5;155m

# ---------------------------- SOURCES / OBJECTS ----------------------------- #
SOURCES_PATH = ./src/
SOURCES = ${addprefix ${SOURCES_PATH}, main.cpp \
										newZombie.cpp \
										randomChump.cpp \
										Zombie.cpp}

OBJECTS = ${SOURCES:.cpp=.o}

# --------------------------------- COMPILER --------------------------------- #
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC_PATH = ./inc/

SRC_COUNT = 0
SRC_TOT = ${shell find . -type f -name '*.cpp' | wc -l}
SRC_PRCT = ${shell expr 100 \* ${SRC_COUNT} / ${SRC_TOT}}
BAR = ${shell expr 23 \* ${SRC_COUNT} / ${SRC_TOT}}

%.o: %.cpp
	@${eval SRC_COUNT = ${shell expr ${SRC_COUNT} + 1}}
	@${CC} ${CFLAGS} -I ${INC_PATH} -c $< -o $@
	@printf "\n ${BOLD}${CUR}${LPURPLE}-> Compiling ${DEF}${BOLD}${LYELLOW}[${NAME}]${DEF}\n"
	@printf " ${LPURPLE}   [${LGREEN}%-23.${BAR}s${LPURPLE}] [%d/%d (%d%%)]${DEF}" "***********************" ${SRC_COUNT} ${SRC_TOT} ${SRC_PRCT}
	@printf "${UP}${UP}${UP}\n"

# ---------------------------------- RULES ----------------------------------- #
NAME = BraiiiiiiinnnzzzZ

all: ${NAME}

${NAME}: ${OBJECTS}
	@printf "\n\n\n\n"
	@${CC} ${CFLAGS} ${OBJECTS} -o ${NAME}
	@printf "${BOLD}${CUR}${LYELLOW}${NAME} COMPILED ✨${DEF}\n\n"

clean:
	@${RM} ${OBJECTS}
	@printf "${ORANGE}${BOLD}\tCLEANING${DEF}\n"
	@printf "${LBLUE}${BOLD}${CUR} - Deleted object files${DEF}\n"

fclean: clean
	@${RM} ${NAME}
	@printf "${LBLUE}${BOLD}${CUR} - Deleted ${NAME}${DEF}\n"

re: fclean all

.PHONY: all clean fclean re
