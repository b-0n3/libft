/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 01:41:41 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/24 19:19:17 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*strdup(const char *s)
{
	char *ptr;
	size_t index;

	index = ft_strlen(s);
	ptr = (char *) malloc (index * sizeof(ptr));
	while (index--)
		ptr[index] = s[index];
	ptr[index] = '\0';
	return (ptr);
}
