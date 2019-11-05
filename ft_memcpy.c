/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarrete <mcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:18:57 by mcarrete          #+#    #+#             */
/*   Updated: 2019/11/05 21:19:58 by mcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long	i;
	unsigned char	value;
	const char		*ptrsrc;
	char			*ptrdst;

	ptrsrc = src;
	ptrdst = dst;
	value = n;
	i = 0;
	while (i < n && ptrdst[i] != '\0')
	{
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	return (dst);
}
