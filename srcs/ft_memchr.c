/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 03:45:58 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/24 19:15:44 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_byte *temp;

	temp = (t_byte *) s;
	while (n--)
	{
		if (*(temp++) == (t_byte) c)
			return((void *) (temp - 1));
	}
	return(NULL);
}
