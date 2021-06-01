#include "private_vector.h"

static t_methods	g_methods =
{
	insert,
	size,
	push_back,
	push_front,
	erase,
	clear,
	at,
	release,
	load,
	add_mem,
	split
};

t_vector	*new_vector(size_t bytes)
{
	t_vector	*vector;
	void		*mem;

	vector = (t_vector *)ft_calloc(1, sizeof(t_vector));
	mem = ft_calloc(1, bytes);
	if (!vector || !mem)
	{
		free(vector);
		free(mem);
		return (0);
	}
	vector->mem = mem;
	vector->max_size = 1;
	vector->bytes = bytes;
	vector->method = &g_methods;
	return (vector);
}
