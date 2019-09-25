# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: b0n3 <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/21 15:31:30 by b0n3              #+#    #+#              #
#    Updated: 2019/09/24 16:41:26 by aait-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/*.c
INC = ./includes/
CC = gcc
FLAGS= -Wall -Werror -Wextra 
PARA  = -c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(PARA) $(SRC) -I $(INC)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	rm -f includes/*.*.gch

re: fclean all
