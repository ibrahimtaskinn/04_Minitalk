/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskin <taskinnibrahim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:44:49 by itaskin           #+#    #+#             */
/*   Updated: 2022/02/06 18:32:07 by itaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;
	size_t				x;

	if (!dest && !src)
		return (0);
	a = dest;
	b = src;
	x = 0;
	while (x < n)
	{
		a[x] = b[x];
		x++;
	}
	return (dest);
}
