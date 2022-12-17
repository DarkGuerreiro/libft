# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 01:17:28 by arosa-de          #+#    #+#              #
#    Updated: 2022/12/17 01:00:38 by arosa-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Aliases
CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
RM = rm -rf

# Source files
SRC =  ft_strlen.c ft_memcpy.c ft_memset.c ft_bzero.c ft_memmove.c ft_memcmp.c ft_memchr.c\
                	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
					ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
					ft_strlcat.c ft_strlcpy.c ft_atoi.c ft_strnstr.c ft_strncmp.c ft_calloc.c ft_strdup.c\

ADD_SRC =  ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
                	ft_strmapi.c ft_striteri.c ft_strtrim.c ft_split.c ft_itoa.c\

BONUS_SRC = ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c ft_lstiter.c ft_lstmap.c\

# Object files
OBJ = $(SRC:.c=.o)
ADD_OBJ = $(ADD_SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(ADD_OBJ)
		ar rcs $(NAME) $(OBJ) $(ADD_OBJ)
        
bonus: $(OBJ) $(ADD_OBJ) $(BONUS_OBJ)
		ar rcs $(NAME) $(OBJ) $(ADD_OBJ) $(BONUS_OBJ)

clean:
		$(RM) $(OBJ) $(ADD_OBJ) $(BONUS_OBJ) # or *.o
fclean: clean
		$(RM) $(NAME)
		$(RM) a.out
re: fclean all

# so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(ADD_SRC) $(BONUS_SRC)
#	gcc -nostartfiles -shared -o libft.so $(OBJ) $(ADD_OBJ) $(BONUS_OBJ)
