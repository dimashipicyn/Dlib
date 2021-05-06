#include "private_vector.h"

BOOLEAN	has_next(t_vector *vector)
{
	if (vector->size <= vector->pos)
	{
		vector->pos = 0;
		return (FALSE);
	}
	return (TRUE);
}
