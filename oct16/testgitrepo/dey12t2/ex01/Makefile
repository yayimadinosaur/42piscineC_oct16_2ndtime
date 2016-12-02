# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfung <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 20:39:14 by wfung             #+#    #+#              #
#    Updated: 2016/11/10 20:48:11 by wfung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

NAME = ft_cat

SRCS = ./ft_cat.c

INCL = ./ft_cat.h

OBJS = ft_cat.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(INCL)
	gcc $(OBJS) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
