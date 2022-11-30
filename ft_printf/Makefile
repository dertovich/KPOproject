NAME		= libftprintf.a

LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

INCS_DIR	= ./include

INCS		= -I$(INCS_DIR) -I$(LIBFT_DIR)

SRC_DIR		= ./source
SRCS		= $(SRC_DIR)/ft_print_c.c \
			$(SRC_DIR)/ft_print_d_i_u.c \
			$(SRC_DIR)/ft_print_hex.c \
			$(SRC_DIR)/ft_print_ptr.c \
			$(SRC_DIR)/ft_print_s.c \
			$(SRC_DIR)/ft_init.c \
			$(SRC_DIR)/ft_parse.c \
			$(SRC_DIR)/ft_printf.c

OBJS		= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS) $(LIBFT)
	@ar rcs $(NAME) $(OBJS) 
	@echo "♂️$(NAME) has been compiled♂️"

.c.o:
	@gcc -Wall -Wextra -Werror $(INCS) -c $< -o $(<:.c=.o)

$(LIBFT):
	@make all -C $(LIBFT_DIR)
	@cp $(LIBFT) $(NAME)

bonus:	re

norme: 
	@echo "Norm version is: "
	@echo "------------"
	@norminette -v
	@echo "------------"
	@echo ""
	@norminette $(LIBFT_DIR)
	@norminette $(INCS_DIR)
	@norminette $(SRC_DIR)

clean:
	@make clean -C $(LIBFT_DIR)
	@rm -rf $(OBJS) "Object has been slated"

fclean:	clean
	@make fclean -C $(LIBFT_DIR)
	@rm -rf $(NAME) "libftprintf.a has been slated"

re:	fclean all

.PHONY:	all clean fclean re norme tt

