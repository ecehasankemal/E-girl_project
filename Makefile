CC = gcc
CFLAGS = -Wall -Werror -Wextra
E_GIRL = @$(CC) $(CFLAGS) e_girl.c e_girl_utils.c e_chat.c main.c -o $(NAME_E_GIRL)

NAME_E_GIRL = egirl

all: $(NAME_E_GIRL)
$(NAME_E_GIRL):
	$(E_GIRL)
	@echo "\n\033[92m $@ built 💼\033[0m\n"
clean:
	@rm -rf egirl
	@echo "\n\033[36m object files removed 👋\033[0m\n"
norm:
	norminette *.c *.h
run:
	@make
	./server
fclean: clean
	@echo "\n\033[36m executables removed 👋\033[0m\n"
re: clean all
.PHONY: all clean fclean re
