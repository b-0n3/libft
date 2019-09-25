/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 01:47:21 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/24 17:15:43 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t index;

	index = 0;
	while (src[index] != '\0')
	{	
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
