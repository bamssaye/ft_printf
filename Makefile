# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 17:29:34 by bamssaye          #+#    #+#              #
#    Updated: 2023/12/07 01:50:44 by bamssaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FUN = ft_pointer.c ft_putchar.c\
	ft_putnbr.c ft_putstr.c\
	ft_puthexa.c ft_putnbr_uns.c\
	ft_format.c ft_printf.c\
	
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -f
OBG = $(FUN:.c=.o)



all: $(NAME)

$(NAME): $(OBG)
	@$(AR) $(NAME) $(OBG)
	@echo Make is Done
	
clean: 
	@$(RM) $(OBG)
	@echo Clean is Done
fclean: clean
	@$(RM) $(NAME)
	@echo Fclean is done
re: fclean all

.PHONY : all clean fclean re