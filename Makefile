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
# SRC += ft_itoa.c

### SRCS #######################################################################

SRCS = $(addprefix $(SRC_DIR), $(SRC))

### HEAD #######################################################################

INC_DIR = ./includes/
	
### OBJS #######################################################################

OBJS := $(SRCS:.c=.o)

### COMMANDS ###################################################################

RM   = rm -f
AR   = ar rcs

################################################################################

%.o%.c:
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY : all clean fclean re