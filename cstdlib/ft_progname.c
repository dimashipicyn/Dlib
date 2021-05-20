#include "libft.h"

static char *progname = 0;

void	ft_setprogname(char *name)
{
	progname = ft_strdup(name);
}

char *ft_getprogname(void)
{
	return (progname);
}
