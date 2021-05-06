#include "private_vector.h"

BOOLEAN	load(t_vector *this, void *mem, size_t n)
{
	void *m;

	m = ft_calloc(n + 1, this->bytes);
	if (!m)
		return (FALSE);
	free(this->mem);
	this->mem = m;
	ft_memcpy(this->mem, mem, n * this->bytes);
	this->size = n;
	this->max_size = n + 1;
	return (TRUE);
}
