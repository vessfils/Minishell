# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcampagn <jcampagn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 15:52:45 by vess              #+#    #+#              #
#    Updated: 2022/06/18 18:43:30 by jcampagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = minishell

CC = clang

CFLAGS =  -Wall -Wextra -Werror -g3 -I./include/ -I libft -v

DEPS = $(SRCS:.c=.d)

SRCS =	main.c \
		init_env.c \
		./token/create_token.c \
		./token/tokenizer.c \
		./token/concatenate_token.c \
		./token/get_token.c \
		./token/change_token_type.c \
		./free/free.c \
		./parsing/parsing.c \
		./parsing/handle_quote.c \
		./utile/utile.c	\





	
_GREY=	$'\033[1;30m
_RED=	$'\033[1;31m
_GREEN=	$'\033[1;32m
_YELLOW=$'\033[1;33m
_BLUE=	$'\033[1;34m
_PURPLE=$'\033[1;35m
_CYAN=	$'\033[1;36m
_WHITE=	$'\033[1;37m

OBJ = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
		@echo "$(_YELLOW)[Compilation ongoing ...]"
		@echo "$(_GREEN)[Compilation finished]"
			make bonus -C ./libft
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -L./libft -lft
		@echo "$(_CYAN)[Executable created]"
		@echo [Name : minishell]

%.o: %.c
	$(CC) $(CFLAGS) -MMD -O3 -c $< -o $@
	
clean:
	make clean -C ./libft
	@rm -f $(OBJ) $(DEPS)
	@echo "$(_RED)[All .o removed]"

fclean: clean
	make clean -C ./libft
	@rm -f $(NAME)
	@echo "$(_RED)[Executable removed]"

git : fclean
	git add --all
	git commit -m ok
	git push 
	
re: fclean all

-include $(DEPS)

.PHONY : all bonus clean fclean re git