#ifndef PRIVATE_VECTOR_H
# define PRIVATE_VECTOR_H
# include "libft.h"

struct s_vector;

typedef struct	s_methods
{
	int		(*insert)(struct s_vector *, void *, size_t);
	int		(*size)(struct s_vector *);
	int		(*push_back)(struct s_vector *, void *);
	int		(*push_front)(struct s_vector *, void *);
	int		(*erase)(struct s_vector *, size_t);
	void	(*clear)(struct s_vector *);
	void	*(*at)(struct s_vector *, size_t);
	void	(*release)(struct s_vector *);
	int		(*load)(struct s_vector *, void *, size_t);
}				t_methods;

typedef struct	s_vector
{
	t_methods	*method;
	void	*mem;
	size_t	size;
	size_t	max_size;
	size_t	bytes;
	size_t	pos;
}				t_vector;

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
