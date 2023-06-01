# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amejia <amejia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/28 17:23:35 by amejia            #+#    #+#              #
#    Updated: 2023/06/01 22:13:12 by amejia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = Account.cpp main2.cpp

OBJS = ${SRCS:.cpp=.o}

CFLAGS = #-Wall -Wextra -Werror -std=c++98

CC = c++

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY = all clean fclean re
	