#include "private_vector.h"

BOOLEAN	insert(t_vector *this, void *elem, size_t position)
{
	if (position > this->size)
		return (FALSE);
	if (this->max_size <= this->size + 1)
	{
		this->mem = ft_realloc(this->mem, this->max_size, this->bytes);
		this->max_size = this->max_size * 2 + 1;
	}
	ft_memmove(this->mem + (position + 1) * this->bytes,
	this->mem + position * this->bytes,
	this->max_size * this->bytes - (position * this->bytes));
	ft_memcpy(this->mem + (position * this->bytes), elem, this->bytes);
	this->size += 1;
	return (TRUE);
}
