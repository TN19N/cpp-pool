# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 16:38:43 by mannouao          #+#    #+#              #
#    Updated: 2022/03/24 15:50:03 by mannouao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

clean :
	$(RM) $(OBJS) *.replace

fclean : clean
	$(RM) $(NAME)

re : fclean all
	