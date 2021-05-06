#include "private_vector.h"

void	release(t_vector *vector)
{
	free(vector->mem);
}
