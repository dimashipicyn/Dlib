#include "private_vector.h"

void	*at(t_vector *this, size_t elem)
{
	if (elem < this->size)
		return (this->mem + (this->bytes * elem));
	return (0);
}
