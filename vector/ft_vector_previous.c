#include "private_vector.h"

void	*previous(t_vector *vector)
{
	t_vector *v;

	v = vector->method->at(vector, vector->pos);
	vector->pos -= 1;
	return (v);
}
