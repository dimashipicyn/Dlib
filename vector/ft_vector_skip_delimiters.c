#include "libft.h"

void	skip_delimiters(t_vector *vector, char *delim)
{
	char	ch;

	while (has_next(vector))
	{
		ch = *(char *)next(vector);
		if (!ft_strchr(delim, ch))
		{
			previous(vector);
			break ;
		}
	}
}
