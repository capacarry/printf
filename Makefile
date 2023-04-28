NAME = libftprintf.a

SRC =  ft_printf.c \
        ft_putchar.c \
        ft_putnbr_base.c \
        ft_putnbr.c \
        ft_putstring.c \
        ft_putun.c \
        ft_ptr.c \

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I.

OBJECTS = *.o

all:$(NAME)
 
$(NAME):
		cc $(CFLAGS) $(SRC) -c
		ar rc $(NAME) $(OBJECTS)
clean:
	$(RM)    $(OBJECTS)  
fclean: clean
		$(RM)    $(NAME)
re:    fclean $(NAME)

.PHONY: all clean fclean re 