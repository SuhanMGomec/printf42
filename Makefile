NAME	= libftprintf.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_printf.c \
			ft_printfchar.c \
			ft_printfhex.c \
			ft_printfptr.c \
			ft_printfputnbr.c \
			ft_printfstr.c \
			ft_printfusgputnbr.c \

OBJS	= $(SRCS:.c=.o)

HEADER	= ft_printf.h

all: $(NAME)

$(OBJS): $(HEADER)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re