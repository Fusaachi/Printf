NAME = libftprintf.a

SRC = $(addprefix src/, ft_printf.c ft_printunsigned.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbrbase.c ft_countnb.c ft_printpointer.c)

SRCS_OBJ = $(SRC:.c=.o)

HEADER_DIR = ./

CC = cc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -I $(HEADER_DIR) -c $< -o $(<:.c=.o)

$(NAME) : $(SRCS_OBJ)
	make -C ../libft 
	cp ../libft/libft.a libftprintf.a
	ar rcs $(NAME) $(SRCS_OBJ)

clean :
	make clean -C ../libft 
	rm -f $(SRCS_OBJ)

fclean : clean
	make fclean -C ../libft 
	rm -f $(NAME)

re : fclean all
	make re -C ../libft 

.PHONY : all clean fclean re