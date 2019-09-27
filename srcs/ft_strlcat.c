/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 23:17:40 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/27 01:44:25 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{

	size_t	i;
	size_t	src_size;
	size_t	dest_size;

	i = 0;
	src_size = ft_strlen(src);
	dest_size = ft_strlen(dst); 
	i = dest_size;
	while (*src && i + 1 < size)
		dst[i++] = *(src++);
	dst[i] = 0;
	return (src_size + ((dest_size > size) ? size : dest_size));
}
