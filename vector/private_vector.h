#ifndef PRIVATE_VECTOR_H
# define PRIVATE_VECTOR_H
# include "libft.h"

BOOLEAN	erase(struct s_vector *this, size_t position);
int	size(struct s_vector *vector);
void	release(struct s_vector *vector);
BOOLEAN	push_front(struct s_vector *vector, void *elem);
BOOLEAN	push_back(struct s_vector *vector, void *elem);
BOOLEAN	insert(struct s_vector *this, void *elem, size_t position);
void	*at(struct s_vector *this, size_t elem);
void	clear(struct s_vector *vector);
BOOLEAN	load(struct s_vector *this, void *mem, size_t n);

#endif
