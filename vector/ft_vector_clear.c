#include "private_vector.h"

void	clear(t_vector *vector)
{
	ft_bzero(vector->mem, vector->max_size * vector->bytes);
	vector->size = 0;
}
