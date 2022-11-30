# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cahayley <cahayley@student.21-schoo>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 14:02:05 by cahayley          #+#    #+#              #
#    Updated: 2021/11/08 14:12:55 by cahayley         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h
SRC = ft_isdigit.c		ft_isascii.c	ft_isprint.c\
      ft_strlen.c		ft_strchr.c	ft_memset.c\
      ft_memcpy.c		ft_strdup.c	ft_strlcpy.c\
      ft_strlcat.c		ft_atoi.c	ft_putchar_fd.c\
      ft_putnchar_fd.c		ft_putstr_fd.c	ft_putnstr_fd.c\
      ft_strjoin.c		ft_chjoin.c	ft_itoa_base.c\
      ft_unsigned_itoa.c	ft_itoa.c	ft_calloc.c\
      ft_strncmp.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Libft complete!"

.c.o: 
	@gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

clean :
	@rm -rf $(OBJ)
	@echo "Libft's objects has been slated!"

fclean : clean
	@rm -rf $(NAME)
	@echo "Libft.a has been slated!"

re : fclean all

.PHONY : all clean fclean re
