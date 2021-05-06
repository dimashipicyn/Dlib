/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbespin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:07:47 by lbespin           #+#    #+#             */
/*   Updated: 2020/11/03 13:15:11 by lbespin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)memptr;
	while (len-- > 0)
		*tmp++ = val;
	return (memptr);
}
