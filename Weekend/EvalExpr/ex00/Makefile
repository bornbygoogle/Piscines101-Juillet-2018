# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/17 10:22:08 by mintran      #+#   ##    ##    #+#        #
#    Updated: 2018/07/22 20:23:09 by mintran     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = eval_expr
SRC = $(wildcard *.c)
NORMINETTE = norminette
HEADERS=./includes/

CC= gcc

CCFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(NORMINETTE)
	@$(CC) $(CCFLAGS) $(SRC) -I$(HEADERS) -o $(NAME)

$(NORMINETTE):
	@$(NORMINETTE)

clean:
	@rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all