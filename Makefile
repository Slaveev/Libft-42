NAME = libft.a
CC = cc
CCFLAGS = -Wextra -Werror -Wall

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
       ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isspace.c \
       ft_isupper.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
       ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
       ft_putstr_fd.c ft_split.c ft_strchr.c ft_strcpy.c ft_strdup.c \
       ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c \
       ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
       ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c  ft_strlcpy.c \
	   ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) -I. $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
