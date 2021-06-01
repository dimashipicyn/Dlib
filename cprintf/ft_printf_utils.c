#include "libft.h"
#include "ft_printf.h"

void	ft_print(t_flag *params)
{
	while (*(params->fmt))
	{
		if (*(params->fmt) == '%')
			break ;
		params->err = write(params->fd, params->fmt, 1);
		params->res += 1;
		(params->fmt)++;
	}
	if (*(params->fmt) == '%')
		(params->fmt)++;
}

void	ft_init_params(t_flag *params)
{
	params->flags = 0;
	params->width = -1;
	params->precision = -1;
	params->ch = ' ';
}

int	ft_processing(t_flag *params)
{
	while (*(params->fmt))
	{
		ft_init_params(params);
		ft_print(params);
		if (*(params->fmt) == '\0')
			break ;
		ft_parser(params);
		if (ft_print_x(params))
			continue ;
		ft_print_c(params);
		ft_print_s(params);
		ft_print_p(params);
		ft_print_d(params);
		ft_print_u(params);
		if (params->err == -1)
			return (-1);
	}
	return (0);
}
