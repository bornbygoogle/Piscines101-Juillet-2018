# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/17 10:22:08 by mintran      #+#   ##    ##    #+#        #
#    Updated: 2018/07/17 11:50:10 by mintran     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = ft_advanced_do-op
SRC = $(wildcard *.c)
OBJ = $(SRC:%.c=%.o)
HEADERS=.

CC= gcc

CCFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CCFLAGS) $(SRC) -I$(HEADERS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all