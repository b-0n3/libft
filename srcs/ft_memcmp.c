/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 05:00:58 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/23 05:15:28 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
		if (((t_byte *)s1)[i] != ((t_byte *)s2)[i])
			return (((t_byte *)s1)[i] - ((t_byte *)s2)[i]);
	return (0);
}
