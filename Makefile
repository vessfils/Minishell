# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vess <vess@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 15:52:45 by vess              #+#    #+#              #
#    Updated: 2022/05/10 23:13:09 by vess             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = minishell

CC = clang

CFLAGS =  -Wall -Wextra -Werror -g3 -pthread

DEPS = $(SRCS:.c=.d)

SRCS =	main.c \
		create_token.c \

	
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
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "$(_CYAN)[Executable created]"
		@echo [Name : minishell]

%.o: %.c
	$(CC) $(CFLAGS) -MMD -I includes -O3 -c $< -o $@
	
clean:
	@rm -f $(OBJ) $(DEPS)
	@echo "$(_RED)[All .o removed]"

fclean: clean
	@rm -f $(NAME)
	@echo "$(_RED)[Executable removed]"

git : fclean
	git add --all
	git commit 
	git push 
	
re: fclean all

-include $(DEPS)

.PHONY : all bonus clean fclean re git