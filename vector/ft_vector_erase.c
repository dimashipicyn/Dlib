#include "private_vector.h"

BOOLEAN	erase(t_vector *this, size_t position)
{
	if (position < this->size)
	{
		ft_memcpy(this->mem + position * this->bytes,
			this->mem + (position + 1) * this->bytes,
			(this->size - position + 1) * this->bytes);
		this->size -= 1;
		ft_bzero(this->mem + (this->size * this->bytes), this->bytes);
		return (TRUE);
	}
	return (FALSE);
}
