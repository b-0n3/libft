/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 23:56:38 by aait-ham          #+#    #+#             */
/*   Updated: 2019/10/07 02:39:47 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	if((start + len) > ft_strlen(s))
	{
		*ptr = ft_strnew(len);
		if (ptr = NULL)
			return (ptr);
		return (ft_strncpy(ptr, s + start, len));
	}
	
	return (NULL);
}
