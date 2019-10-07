/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:44:00 by aait-ham          #+#    #+#             */
/*   Updated: 2019/10/01 04:44:01 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memalloc(size_t size)
{
	void *ptr;

	ptr = malloc(size);
	if (prt == NULL)
		return (NULL);
	ft_bezero(str, size);
	return(ptr);
}
