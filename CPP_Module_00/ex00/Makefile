# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 16:07:39 by hanmpark          #+#    #+#              #
#    Updated: 2023/08/30 12:05:53 by hanmpark         ###   ########.fr        #
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
SOURCES = megaphone.cpp

OBJECTS = ${SOURCES:.cpp=.o}

# --------------------------------- COMPILER --------------------------------- #
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_COUNT = 0
SRC_TOT = ${shell find . -type f -name '*.cpp' | wc -l}
SRC_PRCT = ${shell expr 100 \* ${SRC_COUNT} / ${SRC_TOT}}
BAR = ${shell expr 23 \* ${SRC_COUNT} / ${SRC_TOT}}

%.o: %.cpp
	@${eval SRC_COUNT = ${shell expr ${SRC_COUNT} + 1}}
	@${CC} ${CFLAGS} -c $< -o $@
	@printf "\n ${BOLD}${CUR}${LPURPLE}-> Compiling ${DEF}${BOLD}${LYELLOW}[megaphone]${DEF}\n"
	@printf " ${LPURPLE}   [${LGREEN}%-23.${BAR}s${LPURPLE}] [%d/%d (%d%%)]${DEF}" "***********************" ${SRC_COUNT} ${SRC_TOT} ${SRC_PRCT}
	@printf "${UP}${UP}${UP}\n"

# ---------------------------------- RULES ----------------------------------- #
NAME = megaphone

all: ${NAME}

${NAME}: ${OBJECTS}
	@printf "\n\n\n\n"
	@${CC} ${CFLAGS} ${OBJECTS} -o ${NAME}
	@printf "${BOLD}${CUR}${LYELLOW}${NAME} COMPILED ✨${DEF}\n\n"

clean:
	@${RM} ${OBJECTS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
