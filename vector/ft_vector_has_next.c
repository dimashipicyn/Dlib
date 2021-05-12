#include "private_vector.h"

BOOLEAN	has_next(t_vector *vector)
{
	if (vector->size <= vector->pos)
		return (FALSE);
	return (TRUE);
}
