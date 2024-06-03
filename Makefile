### COMPILE ####################################################################

CC = cc
CFLAGS = -Werror -Wextra -Wall -I $(INC_DIR)

### LIB NAME ###################################################################

NAME = libft.a

### SRC ########################################################################

SRC  = ft_isalpha.c
SRC += ft_isdigit.c
SRC += ft_isalnum.c
SRC += ft_isascii.c
SRC += ft_isprint.c
SRC += ft_strlen.c
SRC += ft_memset.c
SRC += ft_bzero.c
SRC += ft_memcpy.c
SRC += ft_memmove.c
SRC += ft_strlcpy.c
SRC += ft_strlcat.c
SRC += ft_toupper.c
SRC += ft_tolower.c
SRC += ft_strchr.c
SRC += ft_strrchr.c
SRC += ft_strncmp.c
SRC += ft_memchr.c
SRC += ft_memcmp.c
SRC += ft_strnstr.c
SRC += ft_atoi.c
SRC += ft_calloc.c
SRC += ft_strdup.c
SRC += ft_substr.c
SRC += ft_strjoin.c
SRC += ft_strtrim.c
SRC += ft_split.c
SRC += ft_itoa.c
SRC += ft_strmapi.c
SRC += ft_striteri.c
SRC += ft_putchar_fd.c
SRC += ft_putstr_fd.c
SRC += ft_putendl_fd.c
SRC += ft_putnbr_fd.c

### SRC_BONUS #################################################################

SRC_BONUS  = ft_lstnew_bonus.c
SRC_BONUS += ft_lstadd_front_bonus.c
SRC_BONUS += ft_lstsize_bonus.c
SRC_BONUS += ft_lstlast_bonus.c
SRC_BONUS += ft_lstadd_back_bonus.c
SRC_BONUS += ft_lstdelone_bonus.c
SRC_BONUS += ft_lstclear_bonus.c
SRC_BONUS += ft_lstiter_bonus.c
SRC_BONUS += ft_lstmap_bonus.c

### SRCS #######################################################################

SRCS = $(addprefix $(SRC_DIR), $(SRC))
SRCS_BONUS = $(addprefix $(SRC_DIR), $(SRC_BONUS))

### HEAD #######################################################################

INC_DIR = ./includes/

### OBJS #######################################################################

OBJS := $(SRCS:.c=.o)
BONUS_OBJS := $(SRCS_BONUS:.c=.o)

### COMMANDS ###################################################################

RM   = rm -f
AR   = ar rcs

################################################################################

%.o%.c:
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus : $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

clean :
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re
