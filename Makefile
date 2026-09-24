NAME	= libftprintf.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror


SRCS	= ft_printf.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_putnbr_base.c \
			ft_putnbr_unsigned.c \
			ft_putnbr_hex.c \
			ft_putnbr_hex_upper.c \
			ft_putptr.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re