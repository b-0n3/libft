/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 03:35:32 by aait-ham          #+#    #+#             */
/*   Updated: 2019/10/03 03:53:37 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char	const *s, char (*f)(char))
{
	size_t	s_size;
	char	*ptr;
	size_t	i;

	i = -1;
	s_size = ft_strlen(s);
	*ptr = (char *)  malloc(s_size * sizeof(ptr));
	if (ptr == NULL)
		return (ptr);
	while (s[++i])
		ptr[i] = f(s[i]);
	ptr[i] = '\0';
	return (ptr);
}
