
SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			 ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			 ft_lstmap.c

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

SRCS =  ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c 	\
    	ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c \
		ft_toupper.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c 	\
		ft_memcpy.c ft_memset.c ft_strlcat.c ft_strlen.c ft_strnstr.c 	\
		ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c	\
		ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c	\
		ft_putstr_fd.c ft_putendl_fd.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

HDR = libft.h

CC = cc

AR = ar rcs

CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJS) $(HDR)
	$(AR) $(NAME) $(OBJS)

# $(OBJS): $(SRCS)
# 	$(CC) $(FLAGS) $(SRCS)

.PHONY: all
all:
	make $(NAME)

.PHONY: clean
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

.PHONY:	bonus
bonus:	$(NAME) $(OBJS) $(OBJS_BONUS) $(HDR)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)

