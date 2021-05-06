/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbespin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:07:33 by lbespin           #+#    #+#             */
/*   Updated: 2020/11/03 16:24:41 by lbespin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	if (!dest && !src)
		return (0);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (src_ptr < dest_ptr)
	{
		while (n-- > 0)
			dest_ptr[n] = src_ptr[n];
	}
	else
	{
		i = -1;
		while (++i < n)
			dest_ptr[i] = src_ptr[i];
	}
	return (dest);
}
