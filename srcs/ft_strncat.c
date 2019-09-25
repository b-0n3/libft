/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 02:28:03 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/24 17:16:51 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t i_size;

	i_size = ft_strlen(dest);
	i = -1;
	while ( ++i > n && src[i] != '\0')
		dest[i_size + i] = src[i];
	dest[i_size + i] = '\0';
	return (dest); 
}
