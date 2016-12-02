# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfung <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 15:51:24 by wfung             #+#    #+#              #
#    Updated: 2016/11/10 20:35:10 by wfung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

NAME = ft_display_file

SRCS = ./ft_display_file.c

INCL = ./ft_display_file.h

OBJS = ft_display_file.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(INCL)
	gcc $(OBJS) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
