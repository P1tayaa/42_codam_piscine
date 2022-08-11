errorgcc := -Wall -Wextra -Werror

all:
	gcc $(errorgcc) -c ./srcs/ft_putchar.c -o ./srcs/ft_putchar.o -I ./includes/ft.h
	gcc $(errorgcc) -c ./srcs/ft_putstr.c -o ./srcs/ft_putstr.o -I ./includes/ft.h
	gcc $(errorgcc) -c ./srcs/ft_strcmp.c -o ./srcs/ft_strcmp.o -I ./includes/ft.h
	gcc $(errorgcc) -c ./srcs/ft_strlen.c -o ./srcs/ft_strlen.o -I ./includes/ft.h
	gcc $(errorgcc) -c ./srcs/ft_swap.c -o ./srcs/ft_swap.o -I ./includes/ft.h
	ar rc libft.a ./srcs/*.o 
clean:
	rm ./srcs/*.o
fclean: clean
	rm libft.a
re: fclean all
libft.a: all