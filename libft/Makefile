# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: denizozd <denizozd@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 16:01:54 by denizozd          #+#    #+#              #
#    Updated: 2023/11/16 16:30:11 by denizozd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)
OBJS = ${SRCS:.c=.o}
HEADER = libfth.h

all: $(NAME)

$(NAME): 
	$(CC) $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf ${OBJS}

fclean:	clean
	rm -f${NAME}

re:	fclean all
