# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qbenaroc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 10:23:42 by qbenaroc          #+#    #+#              #
#    Updated: 2018/07/22 19:13:29 by qbenaroc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Werror -Wall -Wextra

NAME_00 = colle-00

NAME_01 = colle-01

NAME_02 = colle-02

NAME_03 = colle-03

NAME_04 = colle-04

NAME_MAIN = colle-2

SRC_00 = src_rush00/colle00.c \
		base_functions.c \
		src_rush00/main_rush00.c

SRC_01 = src_rush00/colle01.c \
		base_functions.c \
		src_rush00/main_rush00.c

SRC_02 = src_rush00/colle02.c \
		base_functions.c \
		src_rush00/main_rush00.c

SRC_03 = src_rush00/colle03.c \
		base_functions.c \
		src_rush00/main_rush00.c

SRC_04 = src_rush00/colle04.c \
		base_functions.c \
		src_rush00/main_rush00.c

SRC_MAIN = main.c \
		base_functions.c \
		src_colle2/ft_putnbr.c \
		src_colle2/rush00.c \
		src_colle2/rush01.c \
		src_colle2/rush02.c \
		src_colle2/rush03.c \
		src_colle2/rush04.c \
		src_colle2/compare_str.c \
		src_colle2/display_match.c

all: $(NAME_00) $(NAME_01) $(NAME_02) $(NAME_03) $(NAME_04) $(NAME_MAIN)

$(NAME_00):
	@cc $(FLAGS) -o $(NAME_00) $(SRC_00)

$(NAME_01):
	@cc $(FLAGS) -o $(NAME_01) $(SRC_01)

$(NAME_02):
	@cc $(FLAGS) -o $(NAME_02) $(SRC_02)

$(NAME_03):
	@cc $(FLAGS) -o $(NAME_03) $(SRC_03)

$(NAME_04):
	@cc $(FLAGS) -o $(NAME_04) $(SRC_04)

$(NAME_MAIN):
	@cc $(FLAGS) -o $(NAME_MAIN) $(SRC_MAIN)

fclean:
	@/bin/rm -f $(NAME_00) $(NAME_01) $(NAME_02) $(NAME_03) $(NAME_04) $(NAME_MAIN)

re: fclean all
