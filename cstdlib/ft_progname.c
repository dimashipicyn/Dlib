#include "libft.h"

static char	*g_progname = 0;

void	ft_setprogname(char *name)
{
	if (g_progname)
		return ;
	g_progname = ft_strdup(name);
}

char	*ft_getprogname(void)
{
	return (progname);
}
