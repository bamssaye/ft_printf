# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 17:29:34 by bamssaye          #+#    #+#              #
#    Updated: 2024/01/22 05:47:45 by bamssaye         ###   ########.fr        #
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

.SECONDARY : $(OBG)
.PHONY : all clean fclean re
