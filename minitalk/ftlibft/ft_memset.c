/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskin <taskinnibrahim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:44:48 by itaskin           #+#    #+#             */
/*   Updated: 2022/02/06 18:32:39 by itaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t i)
{
	unsigned char	*str;
	size_t			n;

	n = 0;
	str = dest;
	while (n < i)
	{
		str[n] = c;
		n++;
	}
	return (str);
}
