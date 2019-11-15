/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:17:27 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/15 20:43:36 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * 		ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			cchar;
	unsigned char			*ptrs;


	ptrs = (unsigned char *)s;
	cchar = (unsigned char)c;
	while (*ptrs != cchar && n > 0 && *ptrs != 0)
	{
		ptrs++;
		n--;
	}
	if (*ptrs == cchar)
		return (ptrs);
	return (NULL);
}
