/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskin <taskinnibrahim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:36:19 by itaskin           #+#    #+#             */
/*   Updated: 2022/02/23 17:11:47 by itaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	slen;
	size_t	y;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	y = 0;
	if (start < slen)
		y = slen - start;
	if (y > len)
		y = len;
	result = (char *)malloc(y + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s + start, y + 1);
	return (result);
}	
