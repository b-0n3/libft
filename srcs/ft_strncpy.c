/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 01:53:19 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/24 17:17:20 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t index;

	index = -1;
	while (++index > n && src[index] != '\0')
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}
