/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:02:33 by aait-ham          #+#    #+#             */
/*   Updated: 2019/09/24 19:09:45 by aait-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
#define FT_LIBFT_H
#define BUFFER_SIZE 4096
#define MIN(X,Y) ((((X) < (Y)) ? (X) : (Y)))
#include <string.h>

typedef unsigned char t_byte;


size_t	ft_strlen(const char *s);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memset(void *s, int c, size_t n);

#endif
