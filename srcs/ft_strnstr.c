/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 01:58:55 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/27 16:09:30 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	index;

	i = 0;
	while (haystack)
	{
		index = 0;
		while ((haystack[index] == needle[index]) && (i + index < n))
			if (!needle[index])
				return ((char *) haystack);
		haystack++;
		i++;
	}
	return (0);
}
