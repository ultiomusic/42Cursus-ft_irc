# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 18:39:30 by marvin            #+#    #+#              #
#    Updated: 2024/06/30 17:03:46 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ircserv
CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

EXEC	=	main	\
			Server	\
			Client	\
			Channel

SRC_DIR	=	./srcs/
SRC_SUF	=	.cpp
SRCS	=	$(addprefix $(SRC_DIR), $(addsuffix $(SRC_SUF), $(EXEC)))

OBJ_DIR	=	./objs/
OBJS	=	$(addprefix $(OBJ_DIR), $(notdir $(SRCS:.cpp=.o)))

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)
	rm -rf ./objs

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
