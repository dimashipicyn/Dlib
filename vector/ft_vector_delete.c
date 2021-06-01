#include "private_vector.h"

void	delete(void *obj)
{
	t_methods	*m;

	if (!obj)
		return ;
	m = *(t_methods **)obj;
	if (m && m->release)
		m->release(obj);
	free(obj);
}
