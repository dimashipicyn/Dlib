#include "private_vector.h"

int	push_front(t_vector *vector, void *elem)
{
	if (vector)
	{
		vector->method->insert(vector, elem, 0);
		return (1);
	}
	return (0);
}
