#include "libft.h"

size_t	ft_ptrlen(const void **ptr)
{
	const void	**ptr_copy;

	ptr_copy = ptr;
	while (*ptr_copy)
		ptr_copy++;
	return (ptr_copy - ptr);
}
