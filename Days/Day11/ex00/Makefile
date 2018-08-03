# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/17 10:22:08 by mintran      #+#   ##    ##    #+#        #
#    Updated: 2018/07/18 16:09:37 by mintran     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = main
SRC = $(wildcard *.c)
NORMINETTE = norminette
HEADERS=.

CC= gcc

CCFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(NORMINETTE)
	@$(CC) $(CCFLAGS) $(SRC) -I$(HEADERS) -o $(NAME)

$(NORMINETTE):
	@$(NORMINETTE)

fclean:
	rm -f $(NAME)

re: fclean all
