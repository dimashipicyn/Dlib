/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_ch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbespin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:21:51 by lbespin           #+#    #+#             */
/*   Updated: 2021/06/01 18:51:35 by lbespin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_print_c(t_flag *params)
{
	int	ch;

	if (*(params->fmt) == 'c')
	{
		ch = (unsigned char)va_arg(params->arg, int);
		if (!(params->flags & LEFT))
		{
			params->res += ft_str_repeat(params->fd, --params->width, " ");
			params->width = -1;
		}
		params->err = write(params->fd, &ch, 1);
		params->res += ft_str_repeat(params->fd, --params->width, " ");
		params->res += 1;
		(params->fmt)++;
	}
}

void	ft_print_s(t_flag *params)
{
	char	*s;
	int		len;
	char	ch[2];

	ch[0] = params->ch;
	ch[1] = '\0';
	if (*(params->fmt) == 's')
	{
		s = va_arg(params->arg, char *);
		if (!s)
			s = "(null)";
		len = ft_strnlen(s, params->precision);
		if (!(params->flags & LEFT))
		{
			params->res += ft_str_repeat(params->fd, params->width - len, ch);
			params->width = -1;
		}
		params->err = write(params->fd, s, len);
		params->res += len;
		params->res += ft_str_repeat(params->fd, params->width - len, " ");
		(params->fmt)++;
	}
}
