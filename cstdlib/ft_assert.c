#include "libft.h"

void test_check(int res, char *file, int line, char *expr)
{
	if (res)
	{
		ft_printf("%sTest check, expr: (%s), file: %s, line: %d\t\t\t",
		GREEN, expr, file, line);
		ft_printf("[OK]%s\n", RESET);
	}
	else
	{
		ft_printf("%sTest check, expr: (%s), file: %s, line: %d\t\t\t",
		RED, expr, file, line);
		ft_printf("[KO]%s\n", RESET);
	}
}

void aFailed(char *file, int line, char *expr)
{
	ft_printf("Assertion failed, expr: (%s), file: %s, line: %d\n", expr, file, line);
	exit(0);
}
