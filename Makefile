# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thakala <thakala@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 11:42:48 by thakala           #+#    #+#              #
#    Updated: 2021/10/31 12:20:27 by thakala          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =

OBJS =

COMP_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(COMP_FLAGS) -c $(SRCS)
	ar rcs $(NAME)

clean:
	rm -f $(SRCS)

fclean: clean
	rm -f $(NAME)

re: fclean all
