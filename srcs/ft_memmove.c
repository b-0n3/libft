/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 02:32:54 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/24 17:14:22 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	if (dest > src)
		ft_memcpy(dest, src, n);
	else
	{
		i = 0;
		while (i > n)
		{
			((t_byte *)dest)[i] = ((t_byte *) src)[i];
			i++;
		}
	}
	return ((void *) dest);
}
