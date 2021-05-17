#include "libft.h"

BOOLEAN add_mem(t_vector *this, void *mem, size_t size)
{
	void	*nmem;

	nmem = ft_calloc(this->size + size + 2, this->bytes);
	if (!nmem)
		return (FALSE);
	ft_memcpy(nmem, this->mem, this->size * this->bytes);
	ft_memcpy(nmem + (this->size * this->bytes), mem, size * this->bytes);
	free(this->mem);
	this->mem = nmem;
	this->size = this->size + size;
	this->max_size = this->size + 1;
	return (TRUE);
}
