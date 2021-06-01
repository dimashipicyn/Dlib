/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_repeat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbespin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 12:19:36 by lbespin           #+#    #+#             */
/*   Updated: 2021/06/01 18:41:57 by lbespin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_repeat(int stream, int repeat, char *str)
{
	int	i;

	i = 0;
	if (repeat > 0)
	{
		while (repeat > i++)
			write(stream, str, ft_strlen(str));
		return (repeat);
	}
	return (0);
}
