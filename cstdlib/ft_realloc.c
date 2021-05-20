#include "libft.h"

void	*ft_realloc(void *mem, size_t size, size_t bytes)
{
	void	*new;
	
	new = ft_calloc(size * 2 + 1, bytes);
	if (new)
	{
		ft_memcpy(new, mem, size * bytes);
		free(mem);
		return (new);
	}
	return (0);
}
