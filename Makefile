NAME = libftprintf.a
HFILE = ft_printf.h

SOURCES = ft_hex_prnt.c ft_putstr.c ft_num_prnt.c ft_printf.c \
ft_unsigned_num_prnt.c ft_addr_prnt.c ft_putchar.c

OBJECTS = $(SOURCES:.c=.o)
CC = CC
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS)

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re
