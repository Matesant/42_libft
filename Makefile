NAME = libft.a
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -rf

OBJS_PATH = ./bin/
HEADER = ./include/
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcat.c \
	ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS = ft_lstclear.c ft_lstdelone.c \
	ft_lstadd_front.c ft_lstnew.c ft_lstlast.c \
	ft_lstsize.c ft_lstadd_back.c ft_lstiter.c ft_lstmap.c


OBJS = $(addprefix $(OBJS_PATH), $(SRCS:.c=.o))
OBJS_BONUS = $(addprefix $(OBJS_PATH), $(SRCS_BONUS:.c=.o))

.PHONY: clean fclean re all

all: $(OBJS_PATH) $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $?

$(OBJS_PATH)%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER)

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

bonus:
	@make OBJS="$(OBJS_BONUS)" --no-print-directory

clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJS_PATH)

re: fclean all
