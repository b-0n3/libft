/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 15:51:56 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/28 17:13:59 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	int	i;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	i = ft_memcmp(s1, s2, (s1_size > s2_size) ? s2_size : s1_size);
	if (i != 0)
		return ( (i > 0) ? 1 : -1);
	if (s1_size != s2_size)
		return (( s1_size > s2_size) ? 1 : -1);
	return (0);
}
