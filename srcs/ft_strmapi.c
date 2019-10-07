/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 19:09:25 by aait-ham          #+#    #+#             */
/*   Updated: 2019/10/04 19:37:29 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int i;
	char	*ptr;

	i = -1;
	ptr = (char *) malloc (ft_strlen(s) * sizeof(ptr));
	if (ptr == NULL)
		return (ptr); 
	while (s[++i])
	{
		ptr[i] = f(i, s[i]);
	}
	ptr[i] = '\0';
	return (ptr);
}
