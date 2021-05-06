#include "private_vector.h"

int	size(t_vector *vector)
{
	if (vector)
		return (vector->size);
	return (0);
}
