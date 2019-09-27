/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 23:02:52 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/26 02:54:29 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	while (haystack)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (needle[++i] == '\0')
				return ((char *) haystack);
		}
		haystack++;
	}
	return(NULL);
}