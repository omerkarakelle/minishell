RED				=	"\033[0;31m"
GREEN			=	"\033[0;32m"
YELLOW			=	"\033[0;33m"
CYAN			=	"\033[0;35m"
BLUE			=	"\033[0;36m"
WHITE			=	"\033[0;37m"
END				=	"\033[0;0m"
# Files
NAME	=	minishell
CC		=	gcc -ggdb
SRCS	=	main.c


OBJS 			= $(SRCS:.c=.o)
READLINE		= lib/readline
CFLAGS			= -Wall -Wextra -Werror -I./lib/lib/readline/include/
LFLAGS			= -L./lib/lib/readline/lib -lreadline

all: $(NAME)

$(READLINE):
	make -C lib

$(LIBFT):
	@echo $(YELLOW) "Compiling..." Libft $(END)
	make -C Libft

$(PARSER):
	make -C ./Parser

$(BUILTINS):
	make -C ./Builtins

.c.o: $(READLINE)
	$(CC)  -c  $< $(CFLAGS)


$(NAME): $(READLINE) $(OBJS)
	@echo $(YELLOW) "Building... $(NAME)" $(END)
	$(CC) $(LFLAGS) $(OBJS) -o $(NAME)
	@echo $(GREEN) "$(NAME) created successfully!\n" $(END)

clean:
	@make -C ./Libft fclean
	rm -rf $(OBJS)

fclean: clean
	@make -C lib fclean
	rm -rf ./minishell

re: clean all

norm :
	@norminette *.c
	@norminette ./Parser
	@norminette ./Builtins
	@norminette ./Libft

.PHONY: all, clean, fclean, re