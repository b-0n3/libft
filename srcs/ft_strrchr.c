/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 02:39:46 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/24 23:00:14 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	t_byte *ptr;
	t_byte *ptr2;
	size_t size;
	size_t i;

	i = 0;
	size = ft_strlen(s);
	ptr = NULL;
	ptr2 = (t_byte *) s;
	while (i < size)
	{
		if (*(ptr2++) == (t_byte) c)
			ptr = ptr2;
		i++;
	}
	return ((char *) ptr - 1);
}

