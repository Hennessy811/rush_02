# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cskeleto <cskeleto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 15:23:19 by cskeleto          #+#    #+#              #
#    Updated: 2018/09/09 15:28:53 by cskeleto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
FLAG = -Wall -Werror -Wextra
FILES = srcs/colle00.c srcs/ft_atoi.c srcs/ft_put.c srcs/ft_str_is_numeric.c srcs/ft_strcmp.c srcs/g_c00.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) -o colle-2 colle_2.c $(FILES)

clean:
	/bin/rm -f colle-2

fclean: clean

re: fclean all