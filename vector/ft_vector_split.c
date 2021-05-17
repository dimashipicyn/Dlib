#include "libft.h"

static t_vector	*get_next_str(t_vector *vector, char *delim)
{
	t_vector	*str;
	char		ch;

	str = new_vector(CHAR);
	if (!str)
		return (0);
	while (has_next(vector))
	{
		ch = *(char *)next(vector);
		if (ft_strchr(delim, ch))
			break ;
		str->method->push_back(str, &ch);
	}
	return (str);
}

static void	reset(t_vector *vector)
{
	t_vector	*t;

	vector->pos = 0;
	while (has_next(vector))
	{
		t = next(vector);
		delete(t);
	}
	delete(vector);
}

void	*split(t_vector *vector, char *delim)
{
	t_vector	*split;
	t_vector	*s;
	char		ch;

	split = new_vector(PTR);
	if (!split)
		return (0);
	vector->pos = 0;
	while (has_next(vector))
	{
		ch = *(char *)next(vector);
		if (ft_strchr(delim, ch))
			continue ;
		previous(vector);
		s = get_next_str(vector, delim);
		if (!s)
		{
			reset(split);
			return (0);
		}
		split->method->push_back(split, &s);
	}
	return (split);
}
