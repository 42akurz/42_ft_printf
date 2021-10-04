CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

INCLUDES = ft_printf.h

NAME = libftprintf.a
SOURCES = ft_dec_to_hex_cap.c\
			ft_dec_to_hex.c\
			ft_printf.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putpointer.c\
			ft_putstr.c\
			ft_putunbr.c

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

bonus: all

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@ -I $(INCLUDES)

$(NAME): $(OBJECTS)
	ar cr $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
