# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtrujill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/17 16:06:44 by jtrujill          #+#    #+#              #
#    Updated: 2017/02/09 23:45:08 by jtrujill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
INC = -I fillit.h
FLAGS = gcc -Wall -Wextra -Werror

SRCS = fillit_main.c ft_block_check.c ft_char_check.c ft_connecting.c \
	   ft_input_check.c ft_len_check.c ft_dimensions_check.c ft_no_island.c \
	   ft_convert_hash.c ft_upper_left.c ft_condense.c ft_laststart.c \
	   ft_divider.c ft_index.c ft_format.c ft_solver.c ft_start.c ft_read.c \
	   ft_nextsquare.c ft_emptysquare.c ft_size_find.c ft_next_index.c \
	   ft_will_fit.c ft_reset.c ft_increase_size.c ft_isfill.c ft_fill.c \

all: $(NAME)

$(NAME):
	$(FLAGS) $(INC) -o $(NAME) $(SRCS) -L libft/ -lft

clean:
	rm -rf

fclean: clean
	rm -rf $(NAME)

re: fclean all
