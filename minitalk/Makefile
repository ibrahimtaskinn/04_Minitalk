NAME_SERVER = server.a
NAME_CLIENT = client.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I.
PRINT		= ft_printf/libftprintf.a
LIBFT		= ftlibft/libft.a

FILES		= server.c
OBJS		= $(FILES:%.c=%.o)
FILEC		= client.c
OBJC		= $(FILEC:%.c=%.o)

all				: make-dif $(NAME_SERVER) $(NAME_CLIENT) run-server run-client

$(NAME_SERVER)  : $(OBJS)
	@ar -rcs $(NAME_SERVER) $(OBJS)
$(NAME_CLIENT)  : $(OBJC)
	@ar -rcs $(NAME_CLIENT) $(OBJC)

run-server		:
	$(CC) -o server $(NAME_SERVER) $(PRINT) $(LIBFT)

run-client		:
	$(CC) -o client $(NAME_CLIENT) $(PRINT) $(LIBFT)

make-dif		:
	@make -C ft_printf
	@make -C ftlibft

clean-dif		:
	@make fclean -C ft_printf
	@make fclean -C ftlibft

clean			:
	rm -f *.o

fclean			: clean-dif clean
	@rm -f $(NAME_CLIENT) $(NAME_SERVER) $(PRINT) $(LIBFT) server client

re				: fclean all

norm			:
	@norminette *.[ch]
	@make norm -C ft_printf
	@make norm -C ftlibft

.PHONY			: all clean fclean re make-dif clean-dif run-server run-client norm
