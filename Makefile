CC = clang
CFLAGS = -Wall -Wextra -Werror -I. -Icprintf
ARFLAGS = rcs

#part 1 function
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c\
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c ft_isalpha.c\
ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c\
ft_tolower.c ft_calloc.c ft_strdup.c ft_strnstr.c

#part 2 function
SRCS += ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

#additional function
SRCS += ft_strrev.c get_next_line.c ft_itoa_base.c ft_str_repeat.c\
		ft_strnlen.c ft_toupper_str.c ft_strcmp.c ft_isdigit_str.c\
		ft_split_reg.c ft_swap.c ft_bubblesort.c ft_realloc.c\
		ft_isnewline.c ft_progname.c ft_ptrlen.c ft_free_ptr_array.c

#printf
SRCS += ft_printf.c ft_parser.c ft_pointer.c ft_str_ch.c ft_number.c\
		ft_printf_utils.c

#lists function
SRCS += ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

#lists
SRCS += ft_create_elem.c ft_list_at.c ft_list_clear.c ft_list_find.c\
		ft_list_foreach.c ft_list_foreach_if.c ft_list_last.c ft_list_merge.c\
		ft_list_push_back.c ft_list_push_front.c ft_list_push_params.c\
		ft_list_remove_if.c ft_list_reverse.c ft_list_size.c ft_list_sort.c

#vector
SRCS += ft_vector_new.c ft_vector_delete.c ft_vector_at.c\
		ft_vector_erase.c ft_vector_clear.c ft_vector_size.c\
		ft_vector_push_back.c ft_vector_push_front.c\
		ft_vector_has_next.c ft_vector_next.c ft_vector_load.c\
		ft_vector_release.c ft_vector_insert.c ft_vector_previous.c\
		ft_vector_add_mem.c ft_vector_split.c ft_vector_get_next.c\
		ft_vector_skip_delimiters.c

VPATH := cstdlib:cstring:cprintf:list:vector:cstdio
OBJ = $(SRCS:.c=.o)
NAME = libft.a

.PHONY: all clean fclean re

all: $(SRCS) $(NAME)($(OBJ))

clean:

fclean: clean
		-rm $(NAME)

re: fclean all
