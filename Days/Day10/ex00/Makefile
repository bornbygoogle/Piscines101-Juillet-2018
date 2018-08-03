# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/17 17:22:06 by mintran      #+#   ##    ##    #+#        #
#    Updated: 2018/07/17 17:24:18 by mintran     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

OBJ= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

NAME= libft.a

INCLUDES= ./includes/

CC= gcc

CCFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)


%.o: ./srcs/%.c
	$(CC) $(CCFLAGS) -I$(INCLUDES) -c $^ -o $@
	ar surv $(NAME) $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all