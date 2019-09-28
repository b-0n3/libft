/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 17:23:38 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/28 23:17:54 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int nb;
	int sign;
	int i;

	i = 0;
	nb = 0;
	sign = 1;
	while (nptr[i] == ' ')
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{		
		if (nptr[i] == '-')
		{
			i++;
			sign = -1;
		}
		else
			i++;
	}	
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	return (nb * sign);
}
