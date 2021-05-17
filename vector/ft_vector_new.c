#include "private_vector.h"

static t_methods g_methods =
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

	vector = (t_vector *)ft_calloc(1, sizeof(t_vector));
	if (!vector)
		return (0);
	vector->bytes = bytes;
	vector->method = &g_methods;
	return (vector);
}
