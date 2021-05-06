/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbespin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:07:03 by lbespin           #+#    #+#             */
/*   Updated: 2020/11/03 13:07:06 by lbespin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memptr, int val, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)memptr;
	while (n-- > 0)
	{
		if (*tmp == (unsigned char)val)
			return ((void *)tmp);
		tmp++;
	}
	return (0);
}
