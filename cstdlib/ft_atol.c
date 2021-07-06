#include "libft.h"

long ft_atol(char *str)
{
	long	result;
	int	i;
	int	sign;

	i = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-')
		sign = 1;
	else
		sign = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (sign > 0)
		result = -result;
	return (result);
}
