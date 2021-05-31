#include "libft.h"

void	ft_free_array_ptr(void	**array)
{
	int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
}
