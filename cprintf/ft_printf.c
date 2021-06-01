/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbespin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:03:31 by lbespin           #+#    #+#             */
/*   Updated: 2021/06/01 19:01:36 by lbespin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_eprintf(const char *fmt, ...)
{
	t_flag		params;

	if (ft_getprogname() != 0)
		ft_printf("%s: ", ft_getprogname());
	va_start(params.arg, fmt);
	params.fmt = (char *)fmt;
	params.res = 0;
	params.err = 0;
	params.fd = 2;
	ft_init_params(&params);
	ft_processing(&params);
	va_end(params.arg);
	ft_printf(": %s\n", strerror(errno));
	exit(1);
}

void	ft_wprintf(const char *fmt, ...)
{
	t_flag		params;

	if (ft_getprogname() != 0)
		ft_printf("%s: ", ft_getprogname());
	va_start(params.arg, fmt);
	params.fmt = (char *)fmt;
	params.res = 0;
	params.err = 0;
	params.fd = 2;
	ft_init_params(&params);
	ft_processing(&params);
	va_end(params.arg);
	ft_fprintf(2, ": %s\n", strerror(errno));
}

int	ft_printf(const char *fmt, ...)
{
	t_flag		params;

	va_start(params.arg, fmt);
	params.fmt = (char *)fmt;
	params.res = 0;
	params.err = 0;
	params.fd = 1;
	ft_init_params(&params);
	if (ft_processing(&params) == -1)
		return (-1);
	va_end(params.arg);
	return (params.res);
}

int	ft_fprintf(int stream, const char *fmt, ...)
{
	t_flag		params;

	va_start(params.arg, fmt);
	params.fmt = (char *)fmt;
	params.res = 0;
	params.err = 0;
	params.fd = stream;
	ft_init_params(&params);
	if (ft_processing(&params) == -1)
		return (-1);
	va_end(params.arg);
	return (params.res);
}
/*
int	ft_snprintf(char *buffer, size_t bufsize, const char *fmt, ...)
{
	t_flag		params;

	va_start(params.arg, fmt);
	params.fmt = (char *)fmt;
	params.res = 0;
	params.err = 0;
	params.fd = 1;
	ft_init_params(&params);
	if (ft_processing(&params) == -1)
		return (-1);
	va_end(params.arg);
	return (params.res);
}
*/
