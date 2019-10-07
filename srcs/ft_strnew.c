/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 04:48:07 by aait-ham          #+#    #+#             */
/*   Updated: 2019/10/01 04:52:57 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	char *ptr;

	ptr = (char *) malloc(size);
	if (ptr == NULL)
		return (NULL);
	ptr = (char *) ft_memset(ptr, '\0', size);
	return (ptr);
}
