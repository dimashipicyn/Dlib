#include "private_vector.h"

void	*get_next(t_vector *vector)
{
	t_vector *v;

	v = vector->method->at(vector, vector->pos);
	return (v);
}
