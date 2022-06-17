# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 17:05:51 by aamssafi          #+#    #+#              #
#    Updated: 2022/06/17 07:56:47 by aamssafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
SRCS =	get_next_line.c \
		get_next_line_utils.c \
		check_map.c \
		parse_map.c \
		ft_draw.c moves.c \
		error.c \
		display_end.c \
		keys.c \
		moves2.c \
		moves_count.c \
		check_file_name.c \
		so_long.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c

OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
MLX = -lmlx -framework OpenGL -framework AppKit

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(MLX) $(OBJS)
all : $(NAME)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all