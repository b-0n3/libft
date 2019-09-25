/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 23:02:52 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/25 18:37:50 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);

static size_t	get_index(char ptr, const char *haystack)
{
	size_t index;

	index = 0;
	while (haystack[index] != '\0')
	{
		if (haystack[index] == ptr)
			break;
		index++;
	}
	if (index >= ft_strlen(haystack))
		return (ft_strlen(haystack) +2);
	return (index);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	index;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	index = 0;
	while (haystack[j] != '\0')
	{
		index = get_index(needle[0],haystack + index);
		if (index >= ft_strlen(haystack) ||
			( ft_strlen(haystack)-index < ft_strlen(needle)))
			return ((ft_strlen(needle) == 0) ? (char *) haystack: NULL);
		i = 0;
		while (haystack[j + i] == needle[i])
		{
			if(needle[i] == '\0')
				return ((char *)(haystack + index));
			i++;
		}
		j++;
	}
	return(NULL);
}
