#include "private_vector.h"

BOOLEAN	push_back(t_vector *vector, void *elem)
{
	return (vector->method->insert(vector, elem, vector->size));
}
