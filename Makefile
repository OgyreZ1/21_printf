NAME = libftprintf.a

SRC_LIBFT = ./src/./libft/ft_atoi.c \
			./src/./libft/ft_bzero.c \
			./src/./libft/ft_calloc.c \
			./src/./libft/ft_isalnum.c \
			./src/./libft/ft_isalpha.c \
			./src/./libft/ft_isascii.c \
			./src/./libft/ft_isdigit.c \
			./src/./libft/ft_isprint.c \
			./src/./libft/ft_itoa.c \
			./src/./libft/ft_memchr.c \
			./src/./libft/ft_memcmp.c \
			./src/./libft/ft_memcpy.c \
			./src/./libft/ft_memmove.c \
			./src/./libft/ft_memset.c \
			./src/./libft/ft_putchar_fd.c \
			./src/./libft/ft_putendl_fd.c \
			./src/./libft/ft_putnbr_fd.c \
			./src/./libft/ft_putstr_fd.c \
			./src/./libft/ft_split.c \
			./src/./libft/ft_strchr.c \
			./src/./libft/ft_strdup.c \
			./src/./libft/ft_strjoin.c \
			./src/./libft/ft_strlcat.c \
			./src/./libft/ft_strlcpy.c \
			./src/./libft/ft_strlen.c \
			./src/./libft/ft_strmapi.c \
			./src/./libft/ft_strncmp.c \
			./src/./libft/ft_strnstr.c \
			./src/./libft/ft_strrchr.c \
			./src/./libft/ft_strtrim.c \
			./src/./libft/ft_substr.c \
			./src/./libft/ft_tolower.c \
			./src/./libft/ft_toupper.c \
			./src/./libft/ft_striteri.c \
			./src/./libft/ft_lstadd_back.c \
			./src/./libft/ft_lstadd_front.c \
			./src/./libft/ft_lstclear.c \
			./src/./libft/ft_lstdelone.c \
			./src/./libft/ft_lstiter.c \
			./src/./libft/ft_lstlast.c \
			./src/./libft/ft_lstmap.c \
			./src/./libft/ft_lstnew.c \
			./src/./libft/ft_lstsize.c
SRC_PRINTF = ./src/./printf/ft_printf.c \
			 ./src/./printf/ft_putchr.c \
			 ./src/./printf/ft_putstr.c \
			 ./src/./printf/ft_puthex.c \
			 ./src/./printf/ft_putnbr.c \
			 ./src/./printf/ft_putstr.c \
			 ./src/./printf/ft_strlen.c \

OBJ_LIBFT = $(SRC_LIBFT:.c=.o)

OBJ_PRINTF = $(SRC_PRINTF:.c=.o)

CC = gcc

REM = rm -f

PRINTFH = ./src/./printf/ft_printf.h

LIBFTH = ./src/./libft/libft.h

FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ_LIBFT) $(OBJ_PRINTF) 
			ar rc $(NAME) $(OBJ_LIBFT) $(OBJ_PRINTF) 
			ranlib $(NAME)

%.o:	%.c $(PRINTFH) $(LIBFTH)
			$(CC) $(FLAGS) -c $< -o $@

clean:
	$(REM) $(OBJ_LIBFT) $(OBJ_PRINTF) 

fclean: clean
	$(REM) $(NAME)

re: fclean all
