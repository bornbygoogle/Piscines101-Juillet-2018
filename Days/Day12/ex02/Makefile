# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/17 10:22:08 by mintran      #+#   ##    ##    #+#        #
#    Updated: 2018/07/19 21:51:57 by mintran     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME	=	ft_tail
SRC		=	$(wildcard *.c)
OBJ		=	$(SRC:%.c=%.o)
NORMINETTE = norminette
HEADERS=.

CC= gcc

CCFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)

%.o: ./srcs/%.c
	@$(CC) $(CCFLAGS) -I$(INCLUDES) -c $^ -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all