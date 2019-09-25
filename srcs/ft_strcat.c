/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 02:24:06 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/25 17:51:15 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t i;
	size_t i_size;

	i_size = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i_size + i] = src[i];
		i++;
	}
	dest[i_size + i] = '\0';
	return (dest);
}
