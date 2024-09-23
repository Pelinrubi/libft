NAME = libft.a

CFLAGS += -Wall -Wextra -Werror

CC = cc

RM = rm -f

SRCS = \
		main.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
		$(CC) -o $(NAME) $(OBJS) -lbsd
		$(RM) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all