# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = srcs
INCDIR = includes
OBJDIR = obj

# Source and object files
SRC = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Library name
NAME = libft.a

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/ft.h | $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
