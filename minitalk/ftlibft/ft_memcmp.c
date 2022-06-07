/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskin <taskinnibrahim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:33:21 by itaskin           #+#    #+#             */
/*   Updated: 2022/02/06 18:29:46 by itaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*sp1;
	const unsigned char	*sp2;

	sp1 = (const unsigned char *)s1;
	sp2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*sp1 != *sp2)
			return (*sp1 - *sp2);
		sp1++;
		sp2++;
	}
	return (0);
}
