/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaskin <taskinnibrahim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:45:23 by itaskin           #+#    #+#             */
/*   Updated: 2022/02/06 18:44:50 by itaskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	llen;

	if (*needle == '\0')
		return ((char *)haystack);
	llen = ft_strlen(needle);
	while (*haystack && len-- >= llen)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, llen) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
